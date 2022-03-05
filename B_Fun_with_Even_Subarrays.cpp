#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    ll n;
    cin >> n;

    vector<ll> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    if (n == 1)
    {
        cout << 0;
        return;
    }

    ll count = 0,k= 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (A[i] == A[n-1])
        {
            k++;
        }
        else
        {
            count++;
            k *= 2;
            i = n - k;
        }
    }
    cout << count;
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
