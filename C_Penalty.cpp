#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

int check(int w1,int w2,int rem1,int rem2)
{
     if(w1>w2+rem2 || w2>w1+rem1){
        return 1;
    }
    else{
        return 0;
    }
}

int solveb(string s)
{
    int w1 = 0,w2 = 0,rem1 = 5,rem2 = 5,total = 0;

    for(int i=0;i<10;i++)
    {
        if(check(w1,w2,rem1,rem2))
        {
            return total;
        }

        if(s[i] == '1')
        {
            w1++;
            rem1--;
        }
        else
        {
            rem1--;
        }

        total++;
        
        if(check(w1,w2,rem1,rem2))
        {
            return total;
        }
        i++;

        if(s[i] == '1' || s[i] == '?')
        {
            w2++;
            rem2--;
        }
        else
        {
            rem2 --;
        }
        total++;
    }

    return 10;
}

int solvea(string s)
{
    int w1 = 0,w2 = 0,rem1 = 5,rem2 = 5,total = 0;

    for(int i=0;i<10;i++)
    {
        if(check(w1,w2,rem1,rem2))
        {
                        // cout<<"here";
            return total;
        }

        if(s[i] == '?' || s[i] == '1')
        {
            w1++;
            rem1--;
        }
        else
        {
            rem1--;
        }

        total++;
        
        if(check(w1,w2,rem1,rem2))
        {
            // cout<<"here1";
            return total;
        }
        i++;

        if(s[i] == '1')
        {
            w2++;
            rem2--;
        }
        else
        {
            rem2 --;
        }
        total++;
    }

    return 10;
}

void solve() 
{
    string s;
    cin>>s;
    // cout<<solvea(s)<<" "<<solveb(s);
    cout<<min(solvea(s),solveb(s)); 
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
