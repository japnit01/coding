#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll a,b;
    cin>>a>>b;

    if(a == 0)
    {
        cout<<1;
        return;
    }

    ll ans = (a*1) + (b*2) + 1;
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
