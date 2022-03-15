#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    ll n;
    cin>>n;

    vector<ll> A(n),Xa,Xb;
    // int maxe = INT_MIN,mino = INT_MAX;
    for(int i=0;i<n;i++) 
    {
        cin>>A[i];
        A[i] = abs(A[i]);
        if(i%2 == 0)
        {
            Xb.push_back(A[i]);
        }
        else
        {
            Xa.push_back(A[i]);
        }
    }

    ll sum = 0;
    sort(Xa.begin(), Xa.end());
    sort(Xb.begin(), Xb.end());
    
    if(Xa[Xa.size() - 1] > Xb[0])
    {
        swap(Xa[Xa.size() - 1], Xb[0]);
    }

    for(int i=0;i<Xb.size();i++)
    {
         sum += Xb[i];
    }

    for(int i=0;i<Xa.size();i++)
    { 
        sum -= Xa[i];
    }
    cout << sum;
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
