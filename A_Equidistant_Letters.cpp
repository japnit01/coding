#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    string s;
    cin>>s;
    int n = s.size();
    map<char,int> m;
    for(int i=0;i<n;i++)
    { 
        m[s[i]]++;
    }

    string ans1 ="",ans2="";
    int sig = 0;
    map<char,int>::iterator it;
    for(auto it=m.begin();it!=m.end();it++)
    { 
        if(it->second == 2)
        { 
            ans2+=it->first;
            
        }
        else
        {
            ans1+=it->first;
        }
        cout<<ans2 + ans2 + ans1<<"\n";
    }

    // cout<<ans2 + ans2 + ans1;
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
