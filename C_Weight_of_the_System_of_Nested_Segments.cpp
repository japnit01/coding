#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

bool cmp(const vector<int>& v1,const vector<int>& v2)
{
    return v1[1] > v2[1];
}

void solve() 
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> A(m,vector<int>(3));
        vector<vector<int>> B;
    int sum = 0;
    for(int i=0;i<m;i++){
        cin>>A[i][0]>>A[i][1];
        sum+=A[i][1];
        A[i][2] = i+1;
    }

    sort(A.begin(),A.end(),cmp);

    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    int ex = m - 2*n;
    for(int i=0;i<ex;i++){
        sum -= A[i][1];
    }

    
    
    for(int i = ex;i<m;i++){
        B.push_back(A[i]);
    }

    sort(B.begin(),B.end());
    int l = 0,r = B.size()-1;
    cout<<sum<<"\n";
    while(l<r)
    {
         cout<<B[l][2]<<" "<<B[r][2]<<"\n";
         l++;
         r--;
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
