#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++)   
    {
        cin>>A[i];
    }
    
    vector<int> seq;
    int l = 0,r = n - 1;
    
    while(l+1 < n && A[l+1] > A[l])
    {
        l++;
    }

    while(r-1 >= 0 && A[r-1] > A[r])
    {
        r--;
    }
    // cout<<l<<" "<<r;
    l = l + 1;
    r = n - r;
    // r = r-1;
    // cout<<l<<" "<<r;
    if(l%2 == 0 && r%2 ==0)
    {
        cout<<"Bob";
    }
    else
    {
        cout<<"Alice";
    }

    return 0;
}