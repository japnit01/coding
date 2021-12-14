#include<bits/stdc++.h>
using namespace std;

void solve()
{
        int x1,x2,p1,p2;
        cin>>x1>>p1>>x2>>p2;

        int temp1 = x1,temp2  = x2, cnt1 = 0,cnt2 = 0,wtz1 = 0,wtz2 = 0;
        while(temp1)
        {
            temp1 = temp1/10;
            cnt1++;
        }

        while(temp2)
        {
            temp2 = temp2/10;
            cnt2++;
        }

        while(cnt1 !=cnt2)
        {
            if(cnt1 < cnt2 && p1 > 0)
            {
                p1--;
                x1*=10;
                cnt1++;
            }
            else if(cnt2 < cnt1 && p2 >0)
            {
                p2--;
                x2*=10;
                cnt2++;
            }
            else if(cnt1 < cnt2)
            {
                cout<<"<";
                return;
            }
            else if(cnt2< cnt1)
            {
                cout<<">";
                return;
            }
        }

        if(p2>p1)
        {
            cout<<"<";
        }
        else if(p1>p2)
        {
            cout<<">";
        }
        else if(x1>x2)
        {
            cout<<">";
        }
        else if(x1<x2)
        {
            cout<<"<";
        }
        else
        {
            cout<<"=";
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