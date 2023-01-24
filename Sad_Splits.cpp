#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    int ld  = n%10;
    int counte = 0,counto = 0;
    int n1 = n/10;

    while(n1>0)
    {
        int temp = n1%10;

        if(temp%2 == ld%2 )
        {
            // counte++;
                           cout<<"YES";
                return;   
        }
        // else
        // {
        //     counto++;
        // }

        // if(counte == 2 || counto == 2)
        // {
        //         cout<<"YES";
        //         return;
        // }
        n1 = n1/10;
    }

    cout<<"NO";
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
