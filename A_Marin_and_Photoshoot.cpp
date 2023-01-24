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

    int count0 = 0,count1 = 0,ans = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
        {   
            count1 = 0;
            i++;
            while(i<n && s[i] == '1')
            {
                count1++;
                i++;
            }
            i--;
            // cout<<i<<" "<<ans<<"\n";

            if(count1 <2 && i < n-1)
            {
                ans+=(2 - count1);
            }
            else if(i>=n-1)
            {
                break;
            }


        }
    }

    cout<<ans;
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
