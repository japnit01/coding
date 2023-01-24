#include<bits/stdc++.h>
using namespace std;

int solve(int k, vector<vector<int>> &A)
{
    int m = A.size(),n = A[0].size();

    vector<pair<int,int>> houses;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)	
        {
            if(A[i][j] == 1)
            {
                houses.push_back({i,j});
            }
        }
    }

    int northwest_half_plane = INT_MIN,southeast_half_plane = INT_MAX,southwest_half_plane = INT_MIN,northeast_half_plane = INT_MAX;
    for(int i=0;i<houses.size();i++)
    {
        int a = houses[i].first, b = houses[i].second;
        northwest_half_plane = max(northwest_half_plane, a - b - k);
        southeast_half_plane = min(southeast_half_plane, a - b + k);

        southwest_half_plane = max(southwest_half_plane, a + b - k);
        northeast_half_plane = min(northeast_half_plane, a + b + k);
    }
    int count = 0;
    
    for(int x=0;x<m;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(A[x][y] == 0)
            {
                if (northwest_half_plane <= (x - y) &&  (x - y) <= southeast_half_plane && southwest_half_plane <= (x + y) && (x + y)<= northeast_half_plane)
                {
                        count += 1;
                }    

            }
        }
    }

    return count;     
}

int main()
{
    vector<vector<int>> A = {{0, 0, 0, 0}, {0, 0, 1, 0}, {1, 0, 0, 1}};
    int k = 1;
    cout<<solve(k,A);
}