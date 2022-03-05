#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>


void solve() 
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int counto = 0,count1 = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        {
            count1++;
        }
        else if(s[i] == '0')
        {
            counto++;
        }
    }

    if(count1 > 1 || counto > 1)
    {
        cout<<"NO";
        return ;
    }

    cout<<"YES";

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
