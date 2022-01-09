#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a, b;
    map<pair<int, int>, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        m[{a, b}]++;
    }

    queue<pair<int, int>> q;
    q.push(make_pair(1, n));

    int ans;
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        a = x.first, b = x.second;

        if (a == b)
        {
            ans = a;
        }
        else if (m.find({a + 1, b}) != m.end())
        {
            ans = a;
            q.push({a + 1, b});
        }
        else if (m.find({a, b - 1}) != m.end())
        {
            ans = b;
            q.push({a, b - 1});
        }
        else
        {
            for(int i=a+1;i<b;i++)
            { 
                if(m.find({a,i-1})!=m.end() && m.find({i+1,b})!= m.end())
                { 
                    ans = i;
                    q.push({a,i-1});
                    q.push({i+1,b});
                    break;
                }
            }
        }

        cout<<a<<" "<<b<<" "<<ans<<"\n";
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
