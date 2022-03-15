#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    if(n>19)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES\n";
        ll ans = 1;
        for(int i=0;i<n;i++)
        {
            cout<<ans<<" ";
            ans*=3;
        }
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
