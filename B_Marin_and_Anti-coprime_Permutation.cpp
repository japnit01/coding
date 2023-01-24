#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    if(n%2 ==0)
    {
        ll temp = 998244353,ans = 1;
        for (int i=1;i<=n/2;i++) {
            ans = (ans%temp * i)%temp;
        }

        // cout<<ans<<" ";
        ans = (ans%temp * ans%temp);
        cout<<ans;
    }
    else
    {
        cout<<0;
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
