#include <bits/stdc++.h>
using namespace std;

int end1 = 2e5 + 1;
vector<vector<int>> sum(32,vector<int>(end1,0));

void pre()
{
    for(int i=1;i<=end1;i++)
    {
        int x = i;
        for(int j=0;j<32;j++)
        {
            sum[j][i] = x%2 + sum[j][i-1];
            x/=2;
        }
    }
}

void solve()
{
    int l, r,ans = INT_MIN;
    cin >> l >> r;

        for(int i=0;i<32;i++){ 
            // cout<<sum[i][r]<<" "<<sum[i][l-1]<<"\n";
            ans = max(ans,(sum[i][r] - sum[i][l-1]));
        }   
    
    
    cout<<r-l+1-ans;
}

int main()
{
    int t;
    cin >> t;
    pre();

    while (t-- > 0)
    {
        solve();

        cout << "\n";
    }
}
