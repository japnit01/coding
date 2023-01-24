#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> A(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];

    }

    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum  = 0;
            for(int k=0;k<m;k++)
            {
                sum+=abs(A[j][k] - A[i][k]);
            }
            diff = min(sum, diff);
        }
    }

    cout << diff;
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
