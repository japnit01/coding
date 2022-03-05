#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int a,b;
    cin>>a>>b;
    int count = a;
    int x = 0;
    for(int i=1;i<a;i++)
    {
        x = x ^ i;
    }

    while(x != b)
    {
        x = x ^ a+1;
        a++;
        count++;
    }

    cout<<count;
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
