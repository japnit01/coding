#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        ll n,k;
        cin>>n>>k;

        ll cnt = 1,ans = 0;
    
        while(cnt < k)
        {
            cnt*=2;
            ans++;
        }
        
        if(cnt < n)
            ans += (n - cnt + k - 1)/k;
        cout<<ans<<"\n";

        t--;
    }
}