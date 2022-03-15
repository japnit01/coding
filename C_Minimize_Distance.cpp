#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,k;
    cin>>n>>k;

    vector<int> neg,pos;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            pos.push_back(x);
        }
        else
        {
            neg.push_back(-x);
        }
    }

    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());

    ll ans = 0;
    for(int i=pos.size()-1;i>=0;i-=k)
    {
        ans+=(pos[i]*2);
    }
    // cout<<ans;
    for(int i=neg.size()-1;i>=0;i-=k)
    {
        ans+=(neg[i]*2);
    }

    // cout<<ans;
    int x = 0,y = 0;
    if(pos.size())
    {
        x = pos.back();
    }

    if(neg.size())
    {
        y = neg.back();
    }

    ans-=max(x,y);
    cout<<ans;
};

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
