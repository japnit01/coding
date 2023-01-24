#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{

    int n, m;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cin >> m;
    ll sum = 0;
    vector<int> B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
        sum+=B[i];
        sum = sum%n;
    }

    sum = sum%n;
    cout<<A[sum];
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
