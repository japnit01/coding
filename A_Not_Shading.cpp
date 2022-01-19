#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    vector<string> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    if(A[r][c] == 'B')
    {
        cout<<0;
        return;
    }
    
    int ans = 0,sig = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]=='B')
            {
                sig = 1;
                if(r-i==0 || c-j == 0)
                { 
                    cout<<1;
                    return;
                }
                else
                { 
                    ans = 2;
                }
            }
        }
    }

    if(sig == 0)
    { 
        cout<<-1;
        return;
    }
    cout<<ans;
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
