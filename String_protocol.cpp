#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        char x = s[i];
        int count = 0;
        for(int j=i;j<n;j++)
        {
            if(count < 2 && s[j] == x)
            {
                count++;
                i = j;
            }
            else
            {
                ans+=1;
                break;
            }
        }


        // cout<<count<<" "<<ans<<"\n";
    }


    cout<<ans+1;
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
