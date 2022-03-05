#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>> A(n*m);
    for(int i=0;i<n*m;i++)
    {
        cin>>A[i].first;
        A[i].second = i;
    }
    
    sort(A.begin(),A.end());
    vector<vector<pair<int,int>>> grid(n,vector<pair<int,int>>(m));

    int k = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            grid[i][j] = {A[k].first,A[k].second};
            k++;
        }
    }

    int total = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            for(int l=j-1;l>=0;l--)
            {
                if(grid[i][l].first < grid[i][j].first && grid[i][j].second > grid[i][l].second){
                    total++;
                }
            }
        }
    }

    cout<<total;
    
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
