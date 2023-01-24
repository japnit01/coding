#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        int n;
        cin>>n;

        vector<int> A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }


        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[A[i] - i]++;
        }


        long long ans = 0;
        for(auto diff:mp)
        {
           ans+=(1LL)*diff.second * (diff.second - 1)/2; 
        }

        cout<<ans<<endl;
    }
}