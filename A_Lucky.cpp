#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    string s;
    cin>>s;

    int f = 0,l = 0;
    for(int i=0;i<3;i++) 
    {
        f+=(s[i] - '0');
        l+=(s[i+3] - '0');
    }

    if(f == l)
    {
        cout<<"YES";
        return ;
    }

    cout<<"NO";

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
