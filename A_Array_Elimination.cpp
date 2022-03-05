#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> bit(30, 0);

    for (int j = 0; j < n; j++)
    {
        ll temp = A[j];
        int count = 0;
        while (temp)
        {
            if (temp % 2 == 1)
                bit[count]++;
            temp /= 2;
            count++;
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<bit[i]<<" ";
    // }
    // cout<<"\n";

    for (int k = 1; k <= n; k++)
    {
        int sig = 0;
        for (int i = 0; i < 30; i++)
        {
            // cout<<bit[i]<<" "<<k;
            if (bit[i] % k != 0)
            {
                sig = 1;
                break;
            }
        }

        if (sig == 0)
        {
            cout << k << " ";
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

        cout << "\n";
    }
}
