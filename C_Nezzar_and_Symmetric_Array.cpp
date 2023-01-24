#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void solve(){
    ll n;
    cin>>n;
 
    vector<ll> A(2*n);
    map<ll,ll> mp;
 
    for(int i=0;i < 2*n;i++)
    {
        cin>>A[i];
        mp[A[i]]++;
    }


    if(mp.size() > n)
    {
        cout<<"NO"<<"\n";
        return ;
    }

    for(int i=0;i < 2*n;i++)
    {
        if(A[i] % 2 != 0)
        {
            cout<<"NO"<<"\n";
            return;
        }
    }

    sort(A.begin(),A.end());

    ll sum=0,x=0;

    for(int i=2*n-1;i>=0;i-=2)
    {
        if((A[i]-sum) <= 0 || (A[i]-sum) % 2 != 0 ||  (A[i]-sum) % (n-x) != 0 || A[i]==A[i-2])
        {
            cout<<"NO"<<"\n";
            return ;
        }   

        sum+= (A[i]-sum)/(n-x);
        x++;
    }
    
    cout<<"YES"<<"\n";
 
}
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
