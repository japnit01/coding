#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,k;
    cin>>n>>k;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    { 
        cin>>A[i];
    }

    vector<int> sum(n+1,0);
    for(int i=1;i<=n;i++)
    { 
      sum[i] = sum[i-1] + A[i-1];
    }

    int ans = INT_MAX,ind;
    for(int i=0;i<n+1-k;i++)
    { 
        if(ans > (sum[i+k] - sum[i]))
        {
            ans = sum[i+k] - sum[i]; 
            ind = i;
            // cout<<sum[i]<<" "<<sum[i+k]<<" "<<ind<<"\n";
        }

    }

    cout<<ind+1;
}

int main()
{
        solve();       
}
