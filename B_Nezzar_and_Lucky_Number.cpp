#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-- > 0)
    {
        int q,d;
        cin>>q>>d;

        
        for(int i=0;i<q;i++)
        {
            int n;
            cin>>n;
            string ans = "NO";
            if(n >= (10 * d))
            {
                ans = "YES";
            }
            else
            {
                while(n>0)
                {
                    if(n%10 == d)
                    {
                        ans = "YES";
                        break;
                    }    
                    n-=d;
                }
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}