#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    ll n;
    cin>>n;

    vector<ll> A(n);
    vector<vector<int>> bit(n);
    // int max_length = 0;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        int temp = A[i],count = 0;
        while(temp)
        {
            bit[i].push_back(temp%2);

            temp/=2;
            count++;
        }
        m[bit[i].size()]++;
    }

    ll ans = 0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        ans+=(it->second*(it->second - 1)/2);
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
