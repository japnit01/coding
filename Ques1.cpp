#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int solve(vector<vector<int>> &dp,int n,int x,vector<int> &coins)
{
    if(x == 0)
    {   
        return 1;
    }

    if(n == -1)
    {
        return 0;
    }

    if(dp[n][x] != -1)
    {
        return dp[n][x];
    }

    int nottake = solve(dp,n-1,x,coins);
    int take = 0;
    if(x >= coins[n])
        take = solve(dp,n,x - coins[n],coins);

    return dp[n][x] = (nottake + take)%mod;
}

int main()
{
    int n,x;
    cin>>n>>x;

    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    // vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    vector<int> curr(x+1),prev(x+1);
    // dp[0][0] = 1;
    prev[0] = 1;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= x; j++) 
        {
            curr[j] = prev[j];
            if ( j-coins[i-1] >= 0) 
            {
	            curr[j] = curr[j] +  curr[j-coins[i-1]]% mod;
                curr[j]%=mod;
            }
        }

        prev = curr;
    }

    cout<<curr[x];
    // cout<<solve(dp,n-1,x,coins);
    return 0;
}