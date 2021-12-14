#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> A(n);

    for (ll i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    vector<ll> damage(n);
    
    ll m = 0, total = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        damage[i] = A[i + 1] - A[i];
        
        total += damage[i];

        m = max(damage[i], m);
    }

    ll diff = h - total;
    if (diff >= m)
    {
        cout<<diff;
        return;
    }
    

    damage[n - 1] = INT_MAX;
    ll lm = 1,ans = m;
    
    while (lm <= m)
    {
        ll mid = (lm + m) / 2;
        total = 0;

        for (ll i = 0; i < n; i++)
        {
            total += min(mid, damage[i]);
        }

        if (total >= h)
        {
            ans = min(mid, ans);
            m = mid - 1;
        }
        else
        {
            lm = mid + 1;
        }
    }

    cout<<ans;
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();
        cout<<"\n";
    }
}