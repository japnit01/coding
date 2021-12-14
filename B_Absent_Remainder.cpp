#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    sort(A.begin(),A.end());
    
    int count = 0;
    for(int i=1;i<n;i++)
    {
        if(A[i] != A[0])
        {
            cout<<A[i]<<" "<<A[0]<<"\n";
            count++;
        }

        if(count == n/2)
        {
            break;
        }
    }

}

int main()
{
    int t;
    cin>>t;

    while(t-- >0)
    {
        solve();
    }
}