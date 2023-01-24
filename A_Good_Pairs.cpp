#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    vector<ll> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    ll j = max_element(A.begin(),A.end())- A.begin();
    ll i = min_element(A.begin(),A.end())- A.begin();

    cout<<i+1<<" "<<j+1;
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
