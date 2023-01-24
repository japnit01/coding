#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    vector<int> A(n),B(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++) {
        cin>>B[i];
    }
    
    vector<int> D(n);
    for(int i=0;i<n;i++)
    {
        D[i] = B[i] - A[i];
        if(D[i] < 0)
        {
            cout<<-1;
            return;
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
        
        cout<<"\n";
    }
}
