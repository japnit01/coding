#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int x,y,ans;
    cin>>x>>y;

    if(x<=y)
    {
        cout<<y-x;
    }
    else
    {
        if(x%2 == y%2)
        {
            cout<<(x-y)/2;
        }
        else
        {
            ans = ((x+1-y)/2) + 1;
            cout<<ans;
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
