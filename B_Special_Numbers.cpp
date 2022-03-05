#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() 
{
    ll n,k;
    cin>>n>>k;

    ll ans = 0,p = 1;
    int mod = 1e9 + 7;
    for(int i=0;i<31;i++)
    {
        if(k&(1<<i))
        {
            ans = (ans + p)%mod;
        }
        p = (p*n)%mod;
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
