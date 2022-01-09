#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll a, ll b, ll x)
{
    if(a<b)
    {
        swap(a,b);
    }

    if (x > a && x > b)
    {
        cout << "NO";
        return;
    }
    if (a == x || b == x)
    {
        cout << "YES";
        return;
    }
    if (a == 0 || b == 0)
    {
        cout << "NO";
        return;
    }
    else
    {
        if ((a - x) % b == 0)
        {
            cout << "YES";
            return;
        }
        else
        {
            solve(b,a%b,x);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        ll a, b, x;
        cin >> a >> b >> x;
        solve(a, b, x);
        cout << "\n";
    }
}