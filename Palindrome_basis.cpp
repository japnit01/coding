#include<bits/stdc++.h>
using namespace std;

vector<int> p;
int m = 40001;
vector<int> curr(m+1);
int mod = 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    // cout<<endl;

    cout<<curr[n]<<endl;
}

bool palin(int num)
{
    int revnum = 0;
    int x = num;
    while(num)
    {
        int temp = num%10;
        num/=10;
        revnum = revnum*10 + temp;
    }

    if(revnum == x)
    {
        return true;
    }
    return false;
}

int main()
{

    
    for(int i=1;i<m;i++)
    {
        if(palin(i)){
            p.push_back(i);
        }
    }


    curr[0] = 1;

    for(int i=1;i<=(int)p.size();i++){
        for(int j=1;j<=m;j++){
            if(j - p[i-1] >= 0)
                curr[j] = curr[j] + curr[j - p[i-1]]%mod;
            curr[j]%=mod;
        }
        // cout<<curr[j]<<" ";
    }

    int t;
    cin>>t;

    while(t-->0)
    {
        solve();
    }
}