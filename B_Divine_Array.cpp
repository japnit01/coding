#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int n,q;
        cin>>n;

        vector<int> a(n),prev(n),curr(n);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        vector<vector<int>> saved;
        prev = a;
        for(int i=0;i<n;i++)
        {
            curr[i] = m[prev[i]];
        }

        while(curr != prev)
        {
            m.clear();
            saved.push_back(prev);
            // for(int i=0;i<n;i++)
            // {
            //     cout<<prev[i]<<" ";
            // }
            // cout<<"\n";
            prev = curr;
            for(int i=0;i<n;i++)
            {
                m[prev[i]]++;
            }

            for(int i=0;i<n;i++)
            {
                curr[i] = m[prev[i]];
            }
        }
        saved.push_back(prev);
        // for(int i=0;i<saved.size();i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<saved[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        cin>>q;
        int x,k;
        for(int i=0;i<q;i++)
        {
            cin>>x>>k;
            if(k>=saved.size())
            {
                k = saved.size()-1;
            }
            cout<<saved[k][x-1]<<"\n";
        }
        
        t--;
    }
}