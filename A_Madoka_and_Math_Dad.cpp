#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;
            int sum = 0,count = 0,sum1 = 0;
    if(n%3 ==0)
    {

        while(sum1 < n)
        {
            if(count%2==0)
            {
                sum = (sum*10) + 1;
                sum1+=1;
            }
            else
            {
                sum = (sum*10) + 2;
                sum1+=2;
            }
            
            count++;
        }
    }
    else
    {
        while(sum1 < n)
        {
            if(count%2==0)
            {
                sum = (sum*10) + 2;
                sum1+=2;
            }
            else
            {
                sum = (sum*10) + 1;
                sum+=1;
            }

            count++;
        }
    }

    cout<<sum;
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
