#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    int n = s.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count++;
            while (s[i] == '0')
            {
                i++;
            }
        }

        if(count >= 2)
        {
            cout<<2;
            return;
        }
    }

    if(count == 0)
    {
        cout<<0;
    }
    else if(count == 1)
    {
        cout<<1;
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
