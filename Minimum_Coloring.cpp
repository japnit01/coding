#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,m,x1,y1,x2,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;

    vector<vector<int>> A(n,vector<int>(m));
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if ((i+j)%2 == (x2 + y2 - 2) % 2)
                {
                    A[i][j] = 2;
                }
                else
                {
                    A[i][j] = 1;
                }
            }
            
        }

    if (((x1 + y1 -2) % 2) == ((x2 + y2-2) % 2))
    {
        A[x1-1][y1-1]=1;
        A[x2-1][y2-1]=2;

        if (x1-1>0){
            A[x1-2][y1-1]=3;
        }

        if (x1-1<n-1){
            A[x1][y1-1]=3;
        }

        if (y1-1>0){
            A[x1-1][y1-2]=3;
        }
        
        if (y1-1<m-1){
            A[x1-1][y1]=3;
        }
    }
 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
        
        // cout<<"\n";
    }
}
