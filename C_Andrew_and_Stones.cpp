#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;
    vi A(n);

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    if(n == 3 && A[1]%2 == 1)
    {
        cout<<-1;
        return;
    }

    int sig = 1;
    for(int i=1;i<n-1;i++){
        if(A[i] != 1)
        {
            sig = 0;
            break;
        }
    }

    if(sig == 1)
    {   
        cout<<-1;
        return;
    }

    ll ans = 0;
    for(int i=1;i<n-1;i++)
    {
        ans+=((A[i]+1)/2);
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
