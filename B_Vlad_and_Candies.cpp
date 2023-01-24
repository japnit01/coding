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
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    if(n == 1 && A[0] > 1)
    {
        cout<<"NO";
        return;
    }

    sort(A.begin(),A.end());

    if(n>1 && (A[n-1] - A[n-2]) > 1)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES";

    // cout<<"YES";
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
