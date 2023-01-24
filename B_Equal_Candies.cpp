#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;
    vector<int> A(n);

    ll sum = 0;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        sum+=A[i];
    }

    int x = *min_element(A.begin(),A.end());

    sum-=(x*n);

    cout<<sum;
    
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
