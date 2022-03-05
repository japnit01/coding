#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;

    int u1 = u,d1 = d,r1 = r,l1 = l;

    if(u == n)
    {
        l1--;
        r1--;
    }
    
    if(d==n)
    {
        l1--;
        r1--;
    }

    if(l == n)
    {
       u1--;
       d1--; 
    }

    if(r == n)
    {
        u1--;
        d1--;
    }

    if(u == n-1)
    {
        if(l1 > r1)
        {
            l1--;
        }
        else
        {
            r1--;
        }
    }

    if(d == n-1)
    {
        if(l1>r1)
        {
            l1--;
        }
        else
        {
            r1--;
        }
    }

    if(l == n-1)
    {
        if(u1 > d1)
        {
            u1--;
        }
        else
        {
            d1--;
        }
    }

    if(r == n-1)
    {
        if(u1>d1)
        {
            u1--;
        }
        else
        {
            d1--;
        }
    }

    if(l1 < 0 || r1<0 || u1 < 0 || d1<0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
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
