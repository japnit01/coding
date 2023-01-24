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

    map<int,int> m;
    int total = 0;
    for(int i=0;i<n;i++)
    {
        m[A[i]]++;
    }

    int count = 0;

    for(auto it=m.begin();it!=m.end();++it)
    {
        if(it->second%2 != 0)
        {
            count+=1;
        }
        total+=it->second;
    }

    if((count + total)%4 == 0)
    {
        cout<<count;
    }
    else
    {
        int x = (count+total)%4;
        cout<<(count + x);
    }
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
