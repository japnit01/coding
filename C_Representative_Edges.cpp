#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int max_diff=0,ans=0;
    double diff;

    for(int i=0;i<n-1;i++)
    {
        max_diff=0;
        map<float,int> m;

        for(int j=i+1;j<n;j++)
        {
            diff =((float)A[j]-(float)A[i])/(float)(i-j);
            m[diff]++;
            max_diff = max(max_diff,m[diff]);
        }
        
        ans=max(ans,max_diff);
    }
    
    cout<<n-ans-1;
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

