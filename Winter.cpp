#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void printmap(map<int, int> mp)
{
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n";
}

void bfs(int s)
{
}

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    map<ll, ll> mp;
    vector<bool> vis(n + 1, false);
    vector<ll> adj[n + 1];
    queue<ll> qu;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u] = 0;
        mp[v] = 0;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    while (q-- > 0)
    {
        int type, x;
        cin >> type >> x;
        // cout<<q;
        if (type == 1)
        {
            mp[x] = 1;
            qu.push(x);
        }
        else if (type == 2)
        {

            for (int i = 0; i < x && !qu.empty(); i++)
            {
                int qsize = qu.size();
                while (qsize--)
                {
                    ll temp = qu.front();
                    qu.pop();
                    for (auto node : adj[temp])
                    {
                        if (mp[node] == 0)
                        {
                            mp[node] = 1;
                            qu.push(node);
                        }
                    }
                }
            }

                // queue<pair<int, int>> qu;
                // for (auto it = mp.begin(); it != mp.end(); ++it)
                // {
                //     if (it->second == 1)
                //     {
                //         qu.push({it->first, 1});
                //     }
                // }

                // while (!qu.empty())
                // {
                //     pair<int, int> temp = qu.front();
                //     qu.pop();

                //     if (temp.second > x)
                //     {
                //         break;
                //     }

                //     vis[temp.first] = true;

                //     for (auto node : adj[temp.first])
                //     {
                //         if (!vis[node])
                //         {
                //             mp[node] = 1;
                //             qu.push({node, temp.second + 1});
                //             vis[node] = true;
                //         }
                //     }
                // }

                // printmap(mp);
            }
            else if (type == 3)
            {
                // cout<<x;
                if (mp[x] == 1)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }

            // printmap(mp);
        }
    }

    int main()
    {
        // int t;
        // cin >> t;

        // while (t-- > 0)
        // {
        solve();

        // cout << "\n";
        // }
    }
