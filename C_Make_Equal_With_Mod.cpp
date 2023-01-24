#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    int sig0 = 0,sig1 = 0;
    cin>>n;

    vector<int> A(n);
    map<int,int> m;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];

        if(A[i] == 0)
        {
            sig0 = 1;
        }       

        if(A[i] == 1)
        {
            sig1 = 1;
        }   

        m[A[i]]++;    
    }

    if(sig0 == 1 && sig1 == 1)
    {
        cout<<"NO";
    }
    else if(sig1 == 1)
    {

        for(int i=0;i<n;i++)
        {
            if(m[A[i] - 1] > 0)
            {
                // cout<<A[i];
                cout<<"NO";
                return;
            }
        }

        cout<<"YES";

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
