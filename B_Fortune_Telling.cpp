#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n,x,y;
    cin>>n>>x>>y;

    vector<ll> A(n);
    ll sum = 0;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        sum+=A[i];
    }

    if((x+sum)%2 == y%2)
    {
        cout<<"Alice";
    }
    else
    {
        cout<<"Bob";
    }
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
