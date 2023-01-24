#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n,m,l;
    cin>>n>>m>>l;

    if(n == 0)
    {
        cout<<m;
        return ;
    }

    ll ml = l + n - 1;

    while(m >= l)
    {
        if(m >= l && m <= ml)
        {
            cout<<0;
            return;
        }
        else if(m >= ml)
        {
            m = m%ml;
        }
    }
    
    cout<<m;
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
