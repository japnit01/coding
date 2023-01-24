#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
   int n,k;
   cin>>n>>k;

   vector<int> A(n);
   for(int i=0;i<n;i++) {
       cin>>A[i];
   }
   
   sort(A.begin(),A.end());
   int ans = 0;
   for(int i=0;i<n;i++)
   {
       if(k >= A[i])
       {
           k-=A[i];
           ans++;
       }
       else if(k >= (A[i]+1)/2 )
       {
           ans++;
           break;
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
