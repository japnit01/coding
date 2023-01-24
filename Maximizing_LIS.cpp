#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

vector<int> order(vector<int> A, int n)
{
    vector<int> L(n, 0), X;

    for (int i = 0; i < n; i++)
    {
        if (X.empty())
        {
            X.push_back(A[i]);
            L[i] = X.size();
        }

        int pos = lower_bound(X.begin(), X.end(), A[i]) - X.begin();

        if (pos == X.size())
        {
            X.push_back(A[i]);
        }
        else
        {
            X[pos] = A[i];
        }
        L[i] = X.size();
    }

    return L;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> LIS = order(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << LIS[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        A[i] *= -1;
    }

    reverse(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    vector<int> LDS = order(A, n);
    reverse(LDS.begin(), LDS.end());
    for (int i = 0; i < n; i++)
    {
        cout << LDS[i] << " ";
    }
    cout << "\n";
    int ans = 0;
    
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, LIS[i] + LDS[i + 1]);
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
