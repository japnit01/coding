#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans = 0;
    cin>>n;

    vector<int> A(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    sort(A.begin(),A.end());
    
    int l = 0,r = n-1;
    while(l!=r)
    {
        if(A[l] + A[r] <= 4)
        {
            A[r]+=A[l];
            l++;
        }
        else
        {
            r--;
            ans++;
        }
    }

    cout<<ans + 1;
    return 0;
}