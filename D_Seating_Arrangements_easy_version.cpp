#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n,m;
    cin>>n>>m;

    vector<int> seat(m);
    for(int i=0;i<m;i++)
    {
        cin>>seat[i];
    }

    int inc = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(seat[i] > seat[j])
            {
                inc++;
            }
        }

    }

    cout<<inc;
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
