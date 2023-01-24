#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<ll> dp(n + 1,0), prev(n + 1,0);

    s = " " + s;

    map<ll,set<ll>> mp;

    for (int i = 1; i < n+1; i++)
    {
        int x = s[i] - 'a';
        mp[x].insert(i);
    }

    for (int i = 1; i < n+1; i++)
    {
        int x = s[i] - 'a';
        prev[i] = max(prev[i - 1], dp[i]);
        
        auto it = mp[x].upper_bound(i);

        if (it != mp[x].end())
        {
            dp[*it] = max(dp[*it], prev[i - 1] + 1);
        }
    }

    ll ans = 0;
    for (int i = 1; i <n+1; i++)
    {
        ans = max(ans, dp[i]);
    }

    ans = n - (ans * 2);
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
