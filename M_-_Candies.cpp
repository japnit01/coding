#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &dp,vector<int> &A,int idx,int n,int k)
{
    if(idx == n)
    {
        if(k == 0)
        {
            return 1;
        }

        return 0;
    }

    if(dp[idx][k] != -1)
    {
        return dp[idx][k];
    }

    if(j==0)
    {
        dp[idx][j] = solve(dp,A,idx+1,n,k);
    }    
    else
    {
        dp[idx][j] = solve(dp,A,idx+1,n,k)
    }

    return dp[idx][j];
}

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int m = 1e9 + 7;
    vector<vector<int>> dp(n,vector<int>(k,-1));

    solve(dp,A,0,n,k);
}