#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++)
    {
        if(i == 0)
        {
            cout<<"..+";
        }
        else
        {
            cout<<"+";
        }

        for(int j=(i==0?1:0);j<c;j++)
        {
            cout<<"-+";  
        }
        
        cout<<"\n";
        if(i == 0)
        {
            cout<<".";
        }
        else
        {
            cout<<"|";
        }

        for(int j=0;j<c;j++)
        {
            cout<<".|";
        }
        cout<<"\n";
    }

    cout<<"+";
    for(int i=0;i<c;i++)
    {
        cout<<"-+";
    }

}

int main()
{
    int t;
    cin>>t;

    for(int z=1;z<=t;z++)
    {
        cout<<"Case #"<<z<<":\n";
        solve();
        
        cout<<"\n";
    }
}
