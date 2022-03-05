#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n;
    cin>>n;

    vi A(n),B(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(A[i] < B[i])
        {
            int temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
    }

    int ma = *max_element(all(A));
    int mb = *max_element(all(B));

    cout<<(ma*mb);
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
