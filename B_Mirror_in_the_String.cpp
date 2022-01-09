#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,end = -1;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<n-1;i++)
    { 
        if(s[i+1] > s[i] || (i == 0 && s[i+1] == s[i]))
        { 
            end = i;
            break;
        }
    }
    // cout<<end;
    
    string temp;
    if(end == -1)
    { 
        temp = s;
        reverse(s.begin(),s.end());
        temp+=s;
    }
    else
    { 
        string ans = s.substr(0,end+1);
        temp = ans;
        reverse(ans.begin(),ans.end());
        temp += ans;
        
    }

    cout<<temp;
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