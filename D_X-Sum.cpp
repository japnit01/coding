#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> A(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

    int ans = 0;
    vector<vector<int>> l2u,u2r;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum = 0,r = i,c = j;
            while(r-1>=0 && c-1>=0)
            {
                sum+=A[r-1][c-1];
                r--;
                c--;
            }

            r = i,c = j;
            while(r+1<n&&c+1<m)
            {
                sum+=A[r+1][c+1];
                r++;
                c++;
            }

            r = i,c = j;
            while(r+1<n && c-1>=0)
            {
                sum+=A[r+1][c-1];
                r++;
                c--;
            }

            r = i,c = j;
            while(r-1>=0 && c+1<m)
            {
                sum+=A[r-1][c+1];
                r--;
                c++;
            }

            ans = max(ans,sum+A[i][j]);
        }
    }

    cout<<ans;
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
