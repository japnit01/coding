#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> A,int x,bool &ans)
{
    vector<int> B;

    for(int i=0;i<A.size();i++)
    {
        if(A[i] != x)
        {
            B.push_back(A[i]);
        }
    }


    int m = B.size();

    // for(int i=0;i<m;i++)
    // {
    //     cout<<B[i]<<" ";
    // }

    for(int i=0;i<m;i++)
    {
        if(B[i] != B[m-1-i])
        {
            
            // cout<<"here "<<i<<" "<<m-i+1<<" i ";
            return;
        }
    }

    ans = true;
}

int main()
{
    int t;
    cin>>t;

    while(t>0)
    {
        int n;
        cin>>n;

        vector<int> A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        int l=0,r=n-1,x = -1;
        bool ans = true;
        while(l<=r)
        {
            if(A[l] == A[r])
            {
                l++;
                r--;
            }
            else
            {   ans = false;
                solve(A,A[l],ans);
                if(!ans)
                    solve(A,A[r],ans);
                break;
            }
        }

        if(!ans)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        t--;
    }
}