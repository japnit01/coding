#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

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
    for(int i=0;i<n;i++)
    {
        if(A[i] >= (count+1))
        {
            count++;
        }
    }

    cout<<count;
}

int main()
{
    int t;
    cin>>t;

    for(int z=1;z<=t;z++)
    {
        cout<<"Case #"<<z<<": ";
        solve();
        
        cout<<"\n";
    }
}
