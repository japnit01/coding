#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,x;
    cin>>n>>x;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    vector<int> sum(n);
    int calc = 0;
    sum[0] = A[0];
    for(int i=1;i<n;i++)
    {
        sum[i] = sum[i-1] + A[i];
    }

    vector<int> mx(n+1,INT_MIN);

    for (int j = 0; j < n; j++) {
        mx[j + 1] = max(mx[j + 1], sum[j]);
    }

      for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            mx[j - i + 1] = max(mx[j - i + 1], sum[j] - sum[i - 1]);
        }
    }

    vector<int> ans(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++)
        {
            ans[j] = max(ans[j],mx[i] + x*min(i,j));
        }
    }


    for(int i=0;i<=n;i++)
    {
        cout<<ans[i]<<" ";
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
