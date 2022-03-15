#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    string s;
    cin>>s;

    char c;
    cin>>c;

    int l = 0,r = 0,sig = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == c)
        {
            l = i;
            r = s.size()-i - 1;
            // cout<<l<<" "<<r<<"\n";

            if(l%2 == 0 && r%2 == 0)
            {
                cout<<"YES";
                return;
            }
        }
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
