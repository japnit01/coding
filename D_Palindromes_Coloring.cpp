#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n,k;
    string s;
    cin>>n>>k>>s;

    map<char,int> m;
    vector<int> A(k,0);
    int counte = 0,counto;
    for(int i=0;i<n;i++)
    { 
        m[s[i]]++;
    }

    map<char,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    { 
        
        if((itr->second) >= 2)
        {
            counte+=(itr->second/2);
        }
    }

    cout<<counte<<"\n";

    counto = n - (counte*2);
    int rem = counte%k;
    cout<<rem<<"\n";
    
    for(int i=0;i<n;i++)
    {    
        if(i<rem)
        {
            A[i]+=2;
        }
        A[i]+=((counte/k)*2);
    }
    
    if(counto > (n-rem))
    { 
        if(rem == 0)
        { 
            cout<<A[0]+1;
        }
        else
        { 
            cout<<A[0]-1;
        }
    }
    else
    { 
        if(rem == 0)
            cout<<A[0]-1;
        else
            cout<<A[0]-2;
    }

    return ;
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
