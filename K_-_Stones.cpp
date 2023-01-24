#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &dp,int idx,vector<int> &A,int n,int k)
{
    if(idx == 0)
    {
        return dp[idx]=0;
    }

    if(dp[idx] != -1)
    {
        return dp[idx];
    }

    dp[idx]=0;

    for(int i=0;i<n;i++)
    {
        if(A[i] <= idx && solve(dp,idx - A[i],A,n,k) == 0)
        {
            dp[idx] = 1;
            break;
        }
    }

    return dp[idx];
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

    vector<int> dp(k+1,-1);
    int ans = solve(dp,k,A,n,k);
    // cout<<ans<<endl;
    if(ans == 1)
    {
        cout<<"First";
    }
    else
        cout<<"Second"<<endl;
    // for(int i=0;i<=k;i++)
    // {
    //     cout<<"i: "<<i<<endl;
    //     cout<<"dp: "<<dp[i]<<endl;
    // }
    
    return 0;
}

