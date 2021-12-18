#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a,int b)
{
    // cout<<gcd(a,b)<<" ";
    return a * b / gcd(a, b) ;
}

void solve()
{
    int n;
    cin>>n;

    vector<int> A(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    long long x = 1;
    for(int i=0;i<n;i++)
    {
        if(x > 1e9)
        {
            break;
        }

        x = lcm(x,i+2);
        
        if((A[i] % x) == 0)
        {
            // cout<<A[i]<<" "<<x<<" "; 
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
    return;
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
    }
}


