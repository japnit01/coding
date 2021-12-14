#include<bits/stdc++.h>
using namespace std;
int area;
void solve(vector<vector<int>> &A,vector<vector<int>> &vis,int n,int m,int i,int j)
{

    vis[i][j] = 1;
    area++;
    // cout<<A[i][j]<<" "<<(A[i][j]&4)<<" "<<i<<" "<<j<<"\n";
    if(i > 0 && (A[i][j] & 8) == 0 && vis[i-1][j] == 0)
    {
        // cout<<A[i][j];
        solve(A,vis,n,m,i-1,j);
    }

    if(j < m-1 && (A[i][j] & 4) == 0 && vis[i][j+1] == 0)
    {
        // cout<<A[i][j];
        solve(A,vis,n,m,i,j+1);
    }

    if(i < n-1 && (A[i][j] & 2) == 0 && vis[i+1][j] == 0)
    {
        // cout<<A[i][j];
        solve(A,vis,n,m,i+1,j);
    }

    if(j > 0 && (A[i][j] & 1) == 0 && vis[i][j-1] == 0)
    {
        // cout<<"here"<<A[i][j];
        solve(A,vis,n,m,i,j-1);
    }

    // cout<<A[i][j]<<" "<<area<<"\n";
    return;
}

vector<string> convert()
{
    queue<string> q;
    q.push("1");

    vector<string> digits;
    int n = 15;
    while(n--)
    {
        string s = q.front();
        q.pop();

        digits.push_back(s);

        string r = s;
        q.push(s.append("0"));
        q.push(r.append("1"));
    }
    
    return digits;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> A(n,vector<int>(m));
    vector<vector<int>> vis(n,vector<int>(m,0));
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

    // vector<string> digits = convert();

    // for(int i=0;i<digits.size();i++)
    // {
    //     cout<<digits[i]<<" ";
    // }
    // cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j])
            {   
                area  = 0;
                solve(A,vis,n,m,i,j);
                ans.push_back(area);
            }
        }
    }

    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}