#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, s, b;
    cin >> a >> s;
    vector<ll> A;
    int sig = 0;
    while (s)
    {
        ll x = a % 10, y = s % 10;
        s /= 10;
        a /= 10;
        if (x > y)
        {
            y = (s % 10) * 10 + y;
            s /= 10;
            if (y <= x || y > 18)
            {
                cout << -1;
                sig = 1;
                break;
            }
        }
        // cout<<y-x<<"\n";
        A.push_back(y - x);
    }

    if (sig)
    {
        return;
    }
    if (a > 0)
    {
        cout<<-1;
        return;
    }

    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] == 0)
        {
            A.pop_back();
        }
        else
        {
            break;
        }
    }

    for (int i = A.size() - 1; i >= 0; i--)
    {
        cout << A[i];
    }
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
