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
    int e = 0,o = 0;
    
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        if(e == 0 && A[i]%2 ==0)
        {
            e = A[i];
        }
        
        if(o == 0 && A[i]%2!=0)
        {
            o = A[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(A[i]%2)
        {
            if(A[i] < o)
            {
                cout<<"NO";
                return;
            }
            else
            {
                o  = A[i];
            }
        }
        else if(A[i]%2 == 0)
        {
            if(A[i] <e)
            {
                cout<<"NO";
                return;
            }
            else
            {
                e = A[i];
            }
        }
    }

    cout<<"YES";
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
