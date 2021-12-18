#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
;

void solve()
{

    int n;
    cin >> n;
    vector<ll> A(n);

    ll hcf1 = 0, hcf2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];

        if (i % 2 == 0)
        {
            hcf1 = __gcd(hcf1, A[i]);
        }
        else
        {
            hcf2 = __gcd(hcf2, A[i]);
        }
    }

    // cout << hcf1 << " " << hcf2 << " ";

    bool check1 = true, check2 = true;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && A[i] % hcf2 == 0)
        {
            check2 = false;
        }
        else if (i % 2 != 0 && A[i] % hcf1 == 0)
        {
            check1 = false;
        }
    }

    if (check1)
    {
        cout << hcf1;
    }
    else if (check2)
    {
        cout << hcf2;
    }
    else
    {
        cout << 0;
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();
    }
}