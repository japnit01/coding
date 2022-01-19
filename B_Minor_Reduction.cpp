#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    string s;
    cin>>s;

    string ans = "";
    int n = s.size(),x,y,sig = 0;
    for(int i=n-2;i>=0;i--)
    {
        x = s[i+1]-'0';
        y = s[i] - '0';
        if(x + y > 9)
        {
            sig = 1;
            x+=y;
            s[i+1] = x%10 + '0';
            s[i] = x/10 + '0';
            break;
        }
    }

    if(sig == 0)
    {
        x = s[0] - '0';
        y = s[1] - '0';
        x+=y;
        s[1] = x%10 + '0';
        s.erase(s.begin()+0);
        cout<<s;
    }
    else
    { 
       cout<<s; 
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
