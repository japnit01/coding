#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<pair<int, int>> C, result;
    for (int i = 0; i < n; i++)
    {
        C.push_back({A[i], B[i]});
    }
    sort(C.begin(), C.end());
    // for (auto it = C.begin(); it != C.end(); it++)
    //     {
    //         // cout << it->first << " " << it->second << "\n";
    //     }    

    for (int i = 0; i < n; i++)
    {
        if (B[i] != C[i].second || A[i] != C[i].first)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (B[j] == C[i].second && A[j] == C[i].first)
                {
                    swap(A[i], A[j]);
                    swap(B[i], B[j]);
                    result.push_back({ j + 1,i + 1});
                }
            }
        }
    }

    bool check = true;
    for (int i = 1; i < n; i++)
    {
        if (C[i].first < C[i - 1].first || C[i].second < C[i - 1].second)
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << result.size() << "\n";
        for (auto it = result.begin(); it != result.end(); it++)
        {
            cout << it->first << " " << it->second << "\n";
        }
        return;
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();

        // cout << "\n";
    }
}
