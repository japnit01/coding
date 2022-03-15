#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

int helper(vector<ll> arr,ll x)
{
    int n = arr.size();
    ll val = INT_MAX;
    for(int i = 0;i < n;i++)
    {
        val = min(val, abs(x - arr[i]));
    }
    return val;
}

void solve() 
{
    int n;
    cin>>n;
    vector<ll> A(n),B(n);


    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }

    ll val1 = helper(B, A[0]), val2 = helper(B, A[n - 1]), val3 = helper(A, B[0]), val4 = helper(A, B[n - 1]);
    ll ans = val1 + val2 + val3 + val4;
    ans = min(ans, abs(B[n - 1] - A[n - 1]) + val1 + val3);
    ans = min(ans, abs(A[n - 1] - B[0]) + val1 + val4);
    ans = min(ans, abs(A[0] - B[0]) + val2 + val4);
    ans = min(ans, abs(A[0] - B[n - 1]) + val2 + val3);
    ans = min(ans, abs(A[0] - B[n - 1]) + abs(A[n - 1] - B[0]));
    ans = min(ans, abs(A[0] - B[0]) + abs(A[n - 1] - B[n - 1]));

    cout<<ans;
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
        
        cout<<"\n";
    }
}
