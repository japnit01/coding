#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve()
{
    int n;
    string x, temp;
    cin >> n >> x;

    vector<int> vis;
    queue<int> Q;

    for (int i = x.size() - 1; i >= 0; i--)
    {
        Q.push(x[i]);
    }

    temp = x;
    sort(temp.begin(), temp.end());

    int l = Q.size();
    int mul = x.back() - '0', newmul = 0;
    int count = 0;
    int carry = 0;
    while (!Q.empty())
    {
        int p = Q.front();
        Q.pop();

        if (Q.size() >= n)
        {
            cout << count;
            break;
        }

        int value = (p * mul) + carry;

        if (value > 9)
        {
            int t = value;
            newmul = max(value % 10, mul);
            carry = (t / 10) % 10;  
            Q.push(value%10);
        }
        l--;

        if (l == 0)
        {
            mul = newmul;
            Q.push(carry);
            count++;
        }
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

vector<int> sequentialDigits(int low, int high)
{
}