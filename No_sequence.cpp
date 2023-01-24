#include <bits/stdc++.h>
using namespace std;
#define int long long

long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        vector<int> ans;
        int sum = s;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            int rem = s % k;
            if (rem != 0 && rem != 1 && rem != k - 1)
            {
                cout << -2 << '\n';
                flag = 0;
            }
            if (k != 2 && s % k == k - 1)
                rem = -1;
            ans.push_back(rem);
            s = (s - rem) / k;
        }
        s = 0;
        if (!flag)
            break;
        for (int i = 0; i < n; i++)
            s += ans[i] * binpow(k, i);
        if (sum != s)
            cout << -2 << '\n';
        else
        {
            for (auto i : ans)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}
