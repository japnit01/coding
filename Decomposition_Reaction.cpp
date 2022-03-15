#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> Q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Q[i];
    }
    ll INF = 1e9 + 7;

     while (m--)
  {
    ll c0, x;
        cin >> c0 >> x;

    vector<ll> CW(2 * x);
    for (int i = 0; i < 2 * x; i++)
      cin >> CW[i];

    ll temp = Q[c0 - 1];
    Q[c0 - 1] = 0;

    for (int i = 0; i < (2*x) - 1; i += 2)
    {
      Q[CW[i + 1] - 1] = (Q[CW[i + 1] - 1] + temp * CW[i]) % INF;
    }
  }

//     }

    for (int i = 0; i < n; i++)
            {
                cout << Q[i] << "\n";
            }
}

int main()
{
    // int t;
    // cin>>t;

    // while(t-- > 0)
    // {
    solve();

    //     cout<<"\n";
    // }
}