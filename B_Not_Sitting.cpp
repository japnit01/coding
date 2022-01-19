#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,m;
    cin>>n>>m;

    vector<int> dist;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        { 
            dist.push_back(max(i,n-i-1) + max(j,m-j-1));
        }
    }
    sort(dist.begin(),dist.end());
    for(int i=0;i<dist.size();i++)
    { 
        cout<<dist[i]<<" ";
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
