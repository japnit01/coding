#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

long long calc(string s)
{
    long long sum = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        sum += stoi(s.substr(i, 2));
    }

    return sum;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int swapsr = 0, swapsl = 0, posr = -1, posl = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            swapsr += (n - i - 1);
            posr = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            swapsl += i;
            posl = i;
            break;
        }
    }

    ll ans = calc(s);
    // cout<<ans<<" "<<swapsl<<" "<<swapsr<<" ";
    if (k == 0 || (swapsl > k && swapsr > k) || (swapsr == 0 && swapsl == 0))
    {
        cout << ans;
        return;
    }
    else if (swapsl <= k && swapsr <= k)
    {
        if (posl != posr && swapsl + swapsr <= k)
        {
            cout << ans - 11;
        }
        else
        {
            cout<<ans-10;
        }
    }
    else if(swapsl <= k)
    {
        cout<<ans-1;
    }
    else if(swapsr <= k)
    {
        cout<<ans-10;
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
