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
        vector<int> zeroes;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i] == 0)
            {
                zeroes.push_back(i);
            }
        }

        long long ans = 0;
        for(int i=0;i<(int) zeroes.size();i++)
        {
            int l = zeroes[i];
            int r = (i == zeroes.size() - 1 ? n : zeroes[i+1]);

            long long sum = 0;
            map<long long,int> mp; 
            int mxval = INT_MIN;
            for(int j=l;j<r;j++)
            {
                sum+=A[j];
                mp[sum]++;
                mxval = max(mxval,mp[sum]);
            }

            ans+=mxval;
        }

        int r = (zeroes.size() == 0 ? n : zeroes[0]);
        long long sum = 0;

        for(int i=0;i<r;i++)
        {
            sum+=A[i];
            if(sum == 0)
            {
                ans++;
            }
        }
    

        cout<<ans<<endl;
    }
}