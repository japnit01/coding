#include<bits/stdc++.h>
using namespace std;

bool check(int a,int n)
{
    for(int i=2;i<=n;i++)
    {
        if(a%i != 0)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> A(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i = n-1;i>=0;i--)
    {
        if(!check(A[i],i+1))
        {
            // cout<<A[i]<<" "<<i+1<<"\n";
            cout<<"NO\n";
            return;
        }
    }    
    cout<<"YES\n";
    return;
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
    }
}