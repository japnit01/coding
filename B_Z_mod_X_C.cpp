#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int a,b,c;
    cin>>a>>b>>c;

    int x,y,z;

    z=c;
    y = z+b;
    x = y+a;
    cout<<x<<" "<<y<<" "<<z;
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
