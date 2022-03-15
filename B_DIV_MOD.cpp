#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int l,r,a;
    cin>>l>>r>>a;

    int rem = r%a;
    long long ans = (r/a) + (r%a);
    
    if(r-rem-1 < l)
    {
        for(int i = r-1; i>=l; i-=a)
        {
            long long result = (i/a) + (i%a);
            ans = max(ans,result);
        }
    }
    else
    {
        int x = r-rem-1;
        // cout<<x;
        long long ans1 = (x/a) + (x%a);
        // cout<<ans1;
        ans = max(ans,ans1);
    }
    // cout<<ans1<<"\n";

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
