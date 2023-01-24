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
    ll count1 = 0;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];

        if(A[i] == 1)
        {
            count1++;
        }
    }

    ll ans = 0,count = 0,c1 =0;

    for(int i=n-1;i>=0;i--)
    {
        if(A[i] == 1)
        {
            ans+=(n-count1);
            
            if(c1 > 0)
            {
                ans+=c1;
            }
            c1++;
            // cout<<ans<<"    1\n";
        }

        if(A[i] == 2)
        {
            if(count > 0)
            {
                ans+=count;
            }
            // cout<<ans<<"    2\n";
            count++;
        }
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
