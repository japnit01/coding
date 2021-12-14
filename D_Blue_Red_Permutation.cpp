#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,char>> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
    cout<<"\n";
}

void solve()
{
        int n;
        cin>>n;
        vector<pair<int,char>> A(n);
        vector<int> red,blue;
        for(int i=0;i<n;i++)
        {
            cin>>A[i].first;
        }
    
        for(int i=0;i<n;i++)
        {
            cin>>A[i].second;
            (A[i].second == 'B' ? blue : red).push_back(A[i].first);
        }
        // print(A,n);
        sort(blue.begin(),blue.end());
        sort(red.begin(),red.end(),greater<int>());
        // print(A,n);

        for(int i=0;i<blue.size();i++)
        {
            if(blue[i] < i+1)
            {
                cout<<"NO\n";
                return ;
            }
        }

        for(int i=0;i<red.size();i++)
        {
            if(red[i] > n-i)
            {
                cout<<"NO\n";
                return ;
            }
        }

        cout<<"YES\n";
        return;
}

int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        solve();
        // cout<<t<<"\n";
        t--;
    }
}