#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int pos = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] != s[0])
        {
            pos = i;
            break;
        }
    }

    int count = 1;
    for(int i=pos+1;i<n;i++)
    {
        if(s[i] == s[pos])
        {
            count++;
        }
    }

    int i = max(0,pos - count),mod = 1e9 + 7;
    // cout<<i<<" "<<pos;
    long long int ans=0;
    while(pos<n)
    {
        if(s[i]!=s[pos])
            ans=(ans * 2 + 1) % mod;
        else
            ans=(ans * 2) % mod;
        i++;
        pos++;
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t-- >0)
    {
        solve();
    }
}