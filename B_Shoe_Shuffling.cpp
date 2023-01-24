#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    map<int,int> m;
    vi A(n);
    vector<pair<int,int>> B;

    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        m[A[i]]++;
    }


    for(auto x:m)
    {
        if(x.second < 2)
        {
            cout<<"-1";
            return;
        }
    }

    int s = 1;
    for(int i=1;i<n;i++)
    {
        if(A[i] != A[i-1])
        {
            B.push_back({s,i});   
            s = i+1;
        }    
    }

    B.push_back({s,n});
    
    // for(int i=0;i<B.size();i++)
    // {
    //     cout<<B[i].first<<" "<<B[i].second<<"\n";
    // }

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i].second<<" ";
        for(int j = B[i].first;j<B[i].second;j++)
        {
            cout<<j<<" ";
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
