#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    string s;
    cin >> s;

    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }

    ll y = 9 - (sum % 9);

    if (sum % 9 == 0)
    {
        cout << s[0] << "0";

        for (int i = 1; i < s.size(); i++)
        {
            cout << s[i];
        }
        return;
    }

    int sig = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (sig ==0 && y < (s[i] - '0'))
        {
            sig = 1;
            cout<<y<<s[i];   
        }
        else
        {
             cout<<s[i];
        }
    }

    if(sig == 0)
    {
        cout<<y;
    }
}

int main()
{
    int t;
    cin >> t;

    int cas = 1;
    while (t-- > 0)
    {

        cout << "Case #" << cas << ": ";
        solve();
        cout << "\n";
        cas++;
    }
}