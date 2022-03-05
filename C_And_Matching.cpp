#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        A[i] = i;
    }

    if (k == 3 && n == 4)
    {
        cout << -1 << "\n";
        return;
    }
    else if (k == n - 1)
    {
        cout << n - 3 << " " << 1 << "\n";
        cout << 2 << " " << 0 << "\n";
        cout << n - 1 << " " << n - 2 << "\n";
        A[0] = -1;
        A[2] = -1;
        A[1] = -1;
        A[n - 1] = -1;
        A[n - 2] = -1;
        A[n - 3] = -1;
    }
    else if (k == 0)
    {
        cout << 0 << " " << n - 1 << "\n";
        A[0] = -1;
        A[n - 1] = -1;
    }
    else
    {
        cout << k << " " << n - 1 << "\n";
        cout << n - 1 - k << " " << 0 << "\n";
        A[n - 1 - k] = -1;
        A[0] = -1;
        A[k] = -1;
        A[n - 1] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] != -1)
        {
            A[i] = -1;
            A[n - 1 - i] = -1;

            cout << i << " " << n - 1 - i << "\n";
        }
    }
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
