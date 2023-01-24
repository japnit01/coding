#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    string n;
    cin>>n;

    if(n.size() == 2)
    {
        cout<<n[1];
        return;
    }

    sort(n.begin(), n.end());
    cout<<n[0];
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
