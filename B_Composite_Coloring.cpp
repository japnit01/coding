#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;

    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    vector<int> ans(n,-1);

    int color = 1;
    for(int i = 0; i < prime.size(); i++)
    {
        bool check = false;
        for (int j = 0; j < n; j++)
        {
            if(ans[j] != -1)
            {
                continue;
            }

            if (A[j]%prime[i])
            {
                continue;
            }
            
            check = true;
            ans[j] = color;
        }

        if(check)
        {
            color++;
        }
    }

    cout<<color-1<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
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
