#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int n,k;
        cin>>n>>k;

        vector<int> A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        sort(A.begin(),A.end(),greater<int>());
        int cnt = 0,sum = 0;
        for(int i=0;i<k*2;i++)
        {
            if(i+k < k*2 && cnt<k)
            {
                sum+=(A[i+k]/A[i]);
                // cout<<A[i]<<" "<<A[i+1]<<" "<<sum<<" ";
                cnt++;
            }
        }

        for(int i=k*2;i<n;i++)
        {
            sum+=A[i];
        }
        cout<<sum<<"\n";
    }
}