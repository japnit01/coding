#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    ll n,m;
    cin>>n>>m;

    ll l,r,x,bit = 0;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r>>x;
        bit|=x;
    }

    int temp = 1e9 + 7,count = 1;

    ll ans = 1;
    while(count <= n-1)
    {
        ans = (ans%temp *2)%temp;
        count++;
    }
    ans = (bit * ans)%temp;
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
