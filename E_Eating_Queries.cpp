#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> A(n), sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());
    sum[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = A[i] + sum[i - 1];
    }

    while (q-- > 0)
    {
        int x;
        cin >> x;
        if (x > sum[n - 1])
            cout << -1 << "\n";
        else
        {
            ll result = lower_bound(sum.begin(), sum.end(), x) - sum.begin();
            cout << result + 1 <<"\n";
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
