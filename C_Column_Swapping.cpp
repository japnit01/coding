#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> A(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    ll first = 0,second = -1,third = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (A[i][j] < A[i][j - 1])
            {
                first = 1;
                vector<ll> temp = A[i];

                sort(temp.begin(), temp.end());
                for (int j = 0; j < m; j++)
                {
                    if (A[i][j] != temp[j])
                    {
                        if (second == -1)
                            second = j;
                        else if (third == -1)
                            third = j;
                        else
                        {
                            cout << "-1\n";
                            return;
                        }
                    }
                }
            }
            if (first)
                break;
        }
        if (first)
            break;
    }

    if (first == 0)
    {
        cout << "1 1\n";
        return;
    }
    if (second == -1 || third == -1)
    {
        cout << "-1\n";
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        swap(A[i][second], A[i][third]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if (A[i][j] < A[i][j - 1])
            {
                cout << "-1\n";
                return;
            }
        }
    }
    cout << second + 1 << " " << third + 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();

        // cout<<"\n";
    }
}
