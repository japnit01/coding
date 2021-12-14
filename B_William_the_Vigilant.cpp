#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int n,q,count = 0;
    cin>>n>>q;

    string s;
    cin>>s;
    
    
    for(int i=0;i<n-2;i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')
        {
            count++;
        }
    }

    while(q>0)
    {
        int x;
        char ch;
        cin>>x>>ch;
        // if(s[x - 1] == ch)
        // {
        //     cout<<count<<"\n";
        //     q--;
        //     continue;
        // }
        if((s[x - 1] == 'a' && s[x] == 'b' && s[x+1] == 'c') ||(s[x-2] == 'a' && s[x-1] == 'b' && s[x] == 'c') || (s[x-3] == 'a' && s[x-2] == 'b' && s[x-1] == 'c'))
        {
            count--;
        }

        s[x-1] = ch;
        if((s[x - 1] == 'a' && s[x] == 'b' && s[x+1] == 'c') ||(s[x-2] == 'a' && s[x-1] == 'b' && s[x] == 'c') || (s[x-3] == 'a' && s[x-2] == 'b' && s[x-1] == 'c'))
        {
            count++;
        }
        // cout<<s<<" "<<count<<"\n";
        cout<<count<<"\n";
        q--;
    }
}