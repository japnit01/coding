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
    int count = 0;
    
    if(n%2 == 0)
    {
        char temp = s[(n-2)/2];
        int i = ((n-2)/2);
        while(i >=0 && temp == s[i])
        {
            count++;
            i--;
        }

        cout<<count*2; 
    }
    else
    {
        char temp = s[(n-1)/2];
        int i = ((n-1)/2)-1;
        while(i >=0 && temp == s[i])
        {
            count++;
            i--;
        }

        cout<<count*2 + 1;
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


