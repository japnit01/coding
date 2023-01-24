#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n, X = -1;
    cin >> n;

    vector<int> A(n);
    map<int,int> m;


    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        m[A[i]]++;
    }
    sort(A.begin(),A.end());
    int count1 = 0;
    for(auto it = m.begin();it!=m.end();++it)
    {
        if(it->second == 1)
        {
            count1++;
        }
    }

    // cout<<A[n-1];
    // if(m[A[n-1]] == 1)
    // {
    //     count1--;
    // }
    // cout<<m.size()<<" "<<count1;
    cout<<(m.size() - (count1/2));

}

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        solve();
        
        cout<<"\n";
    }
}
