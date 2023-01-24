#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,m,k;

    cin>>n>>m>>k;
    vector<vector<char>> A(n,vector<char>(m));
    vector<vector<bool>> vis(n,vector<bool>(m));


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j] == '*' || vis[i][j] == false)
            {
                int len = 0;
                while(j > len && j+len+1<m && i>len)
                {
                    if(A[i - len - 1][j - len- 1] == '.' ||A[i - len - 1][j + len + 1] == '.')
                    {
                        break;
                    }

                    len++;
                }

                
            }
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
