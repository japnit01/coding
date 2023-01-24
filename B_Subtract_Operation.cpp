#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n,k,z = 0;
    cin>>n>>k;

    vector<long long> A(n);
    map<long long,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        mp[A[i]]++;
        if(mp[A[i]] == 2)
        {
            z = 1;
        }
    }

    // sort(A.begin(),A.end());
    if(k == 0 && z == 1)
    {
        cout<<"YES";
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(mp[A[i] - k] > 0)
        {
            cout<<"YES";
            return;
        }
    }

    cout<<"NO";


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
