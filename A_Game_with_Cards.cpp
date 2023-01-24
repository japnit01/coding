#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,m;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cin>>m;
    vector<int> B(m);
    for(int i=0;i<m;i++){
        cin>>B[i];
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    if(A[n-1] > B[m-1])
    {
        cout<<"Alice"<<"\n"<<"Alice";
    }
    else if(B[m-1] > A[n-1])
    {
        cout<<"Bob"<<"\n"<<"Bob";
    }
    else
    {
        cout<<"Alice"<<"\n"<<"Bob";
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
