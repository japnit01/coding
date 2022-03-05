#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int a,b,c;
    cin>>a>>b>>c;

    int diff1 = b-a,diff2 = b-c,diff3 = c-a;
    if(((b+diff1)%c == 0) && ((b+diff1)/c>0))
    {
        cout<<"YES";
        return ;
    }
    else if(((b+diff2)%a == 0) && (b+diff2)/a>0)
    {
        
        cout<<"YES";
        return ;
    }
    else if(diff3%2 == 0 && (a+(diff3/2))%b == 0 && (a+(diff3/2))/b > 0)
    {
        cout<<"YES";
        return ;
    }

    cout<<"NO";
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
