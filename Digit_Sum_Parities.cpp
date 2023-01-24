#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    string s = to_string(n);

    int count = 0;
    for(int i = s.size()-1;i>=0;i--)
    {
        if(s[i] == '9')
        {
            count++;
        }
        else
        {
            break;
        }
    }

    // cout<<count;
    if(count%2 == 1)
    {
         cout<<n+2;
    }
    else if(count%2 == 0)
    {
        cout<<n+1;
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
