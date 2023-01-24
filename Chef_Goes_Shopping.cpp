#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;

    vector<ll> L(n), R(n);

    for (int i = 0; i < n; i++)
    {
        cin >> L[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> R[i];
    }

    if (n == 1)
    {
        cout << 0;
        return;
    }

    L[0] = INT_MAX, R[n - 1] = INT_MAX;
    vector<vector<int>> vis(n + 1, vector<int>(2, -1));
    ll ans = 0;
    int l = 0, r = 1;

    while (l < r)
    {
        if (r == n)
        {
            break;
        }

        if (R[l] <= L[r])
        {
            if (vis[l][1] == 1)
            {
                ans += L[r];
                vis[r][0] = 1;
                l = r;
                r += 1;
            }
            else
            {
                ans += R[l];
                vis[l][1] = 1;
                r += 1;
            }
        }
        else
        {
            if(vis[r][0] == 1)
            {
                ans += R[l];
                vis[l][1] = 1;
                r += 1;
            }
            else
            {
                ans += L[r];
                vis[r][0] = 1;
                l = r;
                r += 1;
            }
        }

        // cout<<ans<<" ";
    }

    cout << ans;
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
