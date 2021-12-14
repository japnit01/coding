#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll k,x;
        cin>>k>>x;
        
        ll cmp = k*(k+1)/2;
        
        if(cmp >= x)
        {
            ll l = 1,r = k;
            while(l<r)
            {       
                    ll mid = (l+r)/2;
                    cmp = mid*(mid+1)/2;

                    if(cmp == x)
                    {
                        cout<<mid<<"\n";
                        return;
                    }
                    else if(cmp < x)
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid;
                    }
            }
            cout<<l<<"\n";
            return;
        }
        else
        {
            ll l = k+1,r = (2*k) - 1 ;

            while(l<r)
            {
                ll mid = (l+r)/2;
                ll temp = k - (mid - k) - 1;
                cmp = ((k*(k-1))/2 - (temp*(temp + 1))/2) + (k*(k+1))/2;

                if(cmp == x)
                {
                    cout<<mid<<"\n";
                    return;
                }
                else if(cmp < x)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid;
                }
            }
            cout<<r<<"\n";
            return;
        }
        cout<<(2*k) - 1<<"\n";
}

int main()
{
    int t;
    cin>>t;
    
    while(t>0)
    {
        solve();
        t--; 
    }
}