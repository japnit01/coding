#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n,k;
    cin>>n>>k;

    vector<long long> A(n);
    vector<long long> S(n+1,0);
    //  cout<<k;
    ll sum = 0;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        S[i+1] = S[i] + A[i];
    }

    ll ans = 1e15;
   
    for(int i=0;i<n;i++)
    {
        ll x = (k - S[n-i] + A[0])/(i+1);
        cout<<x<<"\n";
        ans = min(max(0LL,A[0] - x) + i ,ans);
    }

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
