#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

 
 vector<ll> zeros1(20, 0LL), ones1(20, 0LL), zeros2(20, 0LL), ones2(20, 0LL);
 
void work1(ll x){ 
    ll pos=0; 
   for (int i = 0; i <= 18; i++){ 
            if(x%2) ones1[i]++; 
            else    zeros1[i]++; 
            x/=2; 
    } 
} 
 
void work2(ll x){ 
    ll pos=0; 
    for (int i = 0; i <= 18; i++){ 
            if(x%2) ones2[i]++; 
            else    zeros2[i]++; 
            x/=2; 
    } 
} 
 
 
 
void solve()
{
    int l, r;
    cin >> l >> r;

    vector<ll> A(r + 1);
    ll ans = 0;

    //     memset(zeros1, 0LL, sizeof(zeros1)); 
    // memset(zeros2, 0LL, sizeof(zeros2)); 
    // memset(ones1, 0LL, sizeof(ones1)); 
    // memset(ones2, 0LL, sizeof(ones2)); 

    for (int i = l; i <= r; i++)   work1(i); 
    for (int i = l; i <= r; i++){ 
            ll x; 
            cin>>x; 
            work2(x); 
    } 
    ll y=1; 
    for (int i = 0; i <= 20; i++){ 
        if(ones1[i]!=ones2[i] || zeros1[i]!=zeros2[i])  ans+=y; 
        y*=2; 
    } 
    cout<<ans<<endl; 
    // for (int i = 0; i <= r; i++)
    // {
    //     cin >> A[i];

    //     ll x = A[i];
    //     for (i = 0; i <= 18; i++)
    //     {
    //         if (x % 2)
    //         {
    //             oneA[i]++;
    //         }
    //         else
    //         {
    //             zeroA[i]++;
    //         }
    //         x /= 2;
    //     }
    // }

    // for (int i = l; i <= r; i++)
    // {
    //     int x = i;
    //     for (i = 0; i <= 18; i++)
    //     {
    //         if (x % 2)
    //         {
    //             oneN[i]++;
    //         }
    //         else
    //         {
    //             zeroN[i]++;
    //         }
    //         x /= 2;
    //     }
    // }

    // // ll ans=0,x=1;
    // // for(int i = 0;i <= 20;i++)
    // // {
    // //     if(oneA[i]!=oneN[i] || zeroA[i]!=zeroN[i])
    // //     {
    // //         ans+=x;
    // //     }
    // //     x*=2;
    // // }
    // // cout<<ans;

    // ll ans = 0;
    // ll y = 1;
    // for (int i = 0; i <= 20; i++)
    // {
    //     if (oneA[i] != oneN[i] || zeroA[i] != zeroN[i])
    //         ans += y;
    //     y *= 2;
    // }
    // cout << ans;
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();

        cout << "\n";
    }
}

