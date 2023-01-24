#include<bits/stdc++.h>
using namespace std;

long long solve(int i,int j,vector<vector<long long>> &dp,vector<int> &A,int n)
{
    if(i > j)
    {
        return 0;
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    long long takef = A[i] + min(solve(i+2,j,dp,A,n),solve(i+1,j-1,dp,A,n));
    long long takel = A[j] + min(solve(i+1,j-1,dp,A,n),solve(i,j-2,dp,A,n));

    return dp[i][j] = max(takef,takel);
}

int main()
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
    }

    vector<vector<long long>> dp(n,vector<long long>(n,-1));
    
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }

    long long p1 = solve(0,n-1,dp,A,n);
    long long p2 = sum - p1;


    cout<<p1-p2;

}