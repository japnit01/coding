#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n,sum = 0,maxe = INT_MIN;
    cin>>n;

    vector<ll> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
        maxe = max(A[i],maxe);
    }

    sum-=maxe;
    if(sum == 0 && maxe == 0)
    {
        cout<<0;
        
    }
    else if(sum >= maxe)
    {
        cout<<1;
    }
    else
    {
        cout<<maxe - sum;
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
