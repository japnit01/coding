#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    string a, b;
    cin >> a >> b;

    int m = a.size(), n = b.size();
    int i = 0,j = 0,ans = 0;

    while(j < n && i < m)
    {
        if(a[i] == b[j])
        {
            i++;
        }
        else
        {
            ans++;
        }
        j++;
    }

    if(i == m)
    {
         cout<<(ans + n-j);
    }
    else
    {
        cout<<"IMPOSSIBLE";
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
