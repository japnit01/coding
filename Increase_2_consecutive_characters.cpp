#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,q;
    cin>>n>>q;

    string a,b;
    cin>>a>>b;

    while(q-- > 0)
    {
        int l,r;
        cin>>l>>r;
        // cout<<l<<" ";
        // int dist = 0,sig = 0;
        // dist  = (b[l-1] - a[l-1]);
        // if(dist<0)
        // {
        //     dist+=26;
        // }

        vector<int> dist;
        for(int i=l;i<r;i++)
        {
            int dist1 = (b[i] - a[i]);
            if(dist1<0){
                dist1+=26;
            }

            dist.push_back(dist1);
            // cout<<dist1<<" ";
            // if(dist1 != dist)
            // {   
            //     cout<<"NO\n";
            //     sig = 1;
            //     break;
            // }
        }

        
        for(int i=0;i<n;i++)
        {
            
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
