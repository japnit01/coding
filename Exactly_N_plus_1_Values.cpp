#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        cin>>n;

        long long sum = pow(2,n);
        int check = 1;        
        vector<long long> ans;
    
        while(ans.size() < n)
        {
            ans.push_back(check);
            sum-=check;
            if(check == 1)
            {
                ans.push_back(check);
                sum-=check;
            }
            check++;
        }

        // ans.push_back(sum);

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<sum<<" ";
        cout<<"\n";
        t--;
    }
}