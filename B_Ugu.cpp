#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]  == '1' && s[i+1] == '0')
        {
            count++;
        }
    }

    if(count == 0)
        cout<<'0';
    else if(s[n-1] == '0')
        cout<<count*2 - 1;
    else
        cout<<count*2;
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
    }
    return 0;
}