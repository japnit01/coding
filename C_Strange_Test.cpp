#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int a, b;
    cin >> a >> b;

    vi A, B;

    ll temp = a;
    while(temp)
    {
        if(temp%2)
        {
            A.push_back(1);
        }
        else
        {
            A.push_back(0);
        }
        temp/=2;
    }

    temp = b;
    while(temp)
    {
        if(temp%2)
        {
            B.push_back(1);
        }
        else
        {
            B.push_back(0);
        }
        temp/=2;
    }

    ll sum = b, bit = 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 1 && B[i] == 0)
        {
            sum += bit;
        }
        else if (A[i] == 0 && B[i] == 1)
        {
            sum -= bit;
        }
        bit *= 2;
    }

    // cout<<"\n"<<sum-b<<"\n";

    temp = a;
    temp = a | b;

    ll xop = abs(temp - b) + 1;
    int ans = min((ll)b - a, min(xop, sum - b + 1));
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
