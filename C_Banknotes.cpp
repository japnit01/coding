#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(vector<ll> A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

ll solve()
{
    ll n,k;
    cin>>n>>k;

    vector<ll> A(n),C(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        A[i] = pow(10,A[i]);
    }

    // print(A,n) ;   
    k+=1;
    ll sum = 0;  
    for(int i=0;i<n-1;i++)
    {
        int notes = (A[i+1] - A[i])/A[i];  
        if(notes + sum > k)
        {
            notes = k - sum;
        }
        
        C[i] = notes;
        sum+=notes;
    }
    if(k > sum)
    {
        C[n-1] = k - sum;
    }

    // print(C,n);
    ll amt = 0;
    for(int i=0;i<n;i++)
    {
        amt+=(C[i]*A[i]);
    }
    return amt;
}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        cout<<solve()<<"\n";
    }
}