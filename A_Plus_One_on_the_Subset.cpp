#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin>>n;

    vector<long long> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    long m = *max_element(A.begin(),A.end());
    long x = *min_element(A.begin(),A.end());
    int sum = 0;
    // for(int i=0;i<n;i++){
    //    if(m - A[i])
    // }

    cout<<(m-x);
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
