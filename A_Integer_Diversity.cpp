#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,cnt = 0;
    cin>>n;
    vector<int> A(n);
    map<int,int> m;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        
        int x = abs(A[i]);
        m[x]++;

        if(m[x] == 1 || (A[i]!=0 && m[x] == 2))
        {
            cnt++;
        }
    }
    
    cout<<cnt;
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
        
        cout<<"\n";
    }
}