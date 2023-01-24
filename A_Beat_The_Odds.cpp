#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n,cnt = 0,cnte = 0;
    cin>>n;

    vi A(n);
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];

        if(A[i]%2!=0)
        {
            cnt++;
        }
        else
        {
            cnte++;
        }
    }

    cout<<min(cnt,cnte);

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
