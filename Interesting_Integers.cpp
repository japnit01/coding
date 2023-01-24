#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll count = 0;
    for (ll i = a; i <= b; i++)
    {
        ll sum = 0, prod = 1,temp = i;

        while (temp)
        {
            int x = temp % 10;
            sum += x;
            prod *= x;
            temp /= 10;
        }

        if (prod % sum == 0)
            count++;
    }

    cout << count;
}

int main()
{
    int t;
    cin >> t;

    int cas = 1;
    while (t-- > 0)
    {

        cout << "Case #" << cas << ": ";
        solve();
        cout << "\n";
        cas++;
    }
}
