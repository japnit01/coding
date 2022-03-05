#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;

    vector<int> A(n);
    vector<int> X(l+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        int j = 0,temp = A[i];

        while(temp)
        { 
            if(temp%2 == 1)
                X[j]++;
            temp/=2;
            j++;
        }
    }

    int dist = 0,bit = 1;
    for (int i = 0; i <= l; i++)
    {
        if(X[i] > n/2)
        { 
            dist+=bit;
        }
        bit*=2;
    }

    cout << dist;
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
