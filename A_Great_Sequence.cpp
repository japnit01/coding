#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,x;
    cin>>n>>x;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    sort(A.begin(),A.end());
    map<ll,ll> mp;
    int cnt = 0;
    for(int i=0; i<n; i++){
            if(A[i]%x==0 && mp[A[i]/x]){
                cnt+=2;
                mp[A[i]/x]--;
            }
            else mp[A[i]]++;
        }
        cout<<n-cnt;
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
