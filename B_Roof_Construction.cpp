#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n;
    cin>>n;
    

    ll max_power = log2(n - 1);


    for(int i=(1ll << max_power) - 1;i>=0;i--) {
        cout << i << " ";
    }
    for(int i = (1ll << max_power); i < n; i++) {
        cout << i << " ";
    }


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
