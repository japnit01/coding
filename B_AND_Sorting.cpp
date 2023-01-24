#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n, X = -1;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> B = A;

    sort(B.begin(), B.end());

    for (int i = 0; i < n; i++)
        if (A[i] != B[i])
        {
            X &= A[i];
        }

    cout << X;
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
