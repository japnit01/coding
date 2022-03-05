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
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    if(A[n-1] < A[n-2])
    {
        cout<<-1<<"\n";
        return;
    }

    if(A[n-1] < 0)
    {
        if(is_sorted(A.begin(), A.end()))
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    else
    {
        cout<<n-2<<"\n";
        for(int i=1;i<=n-2;i++)
        {
            cout<<i<<" "<<n-1<<" "<<n<<"\n";
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
        
        // cout<<"\n";
    }
}
