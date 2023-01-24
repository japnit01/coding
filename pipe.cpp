#include <bits/stdc++.h>
using namespace std;

bool check(int x,int y,vector<vector<int>> &A,int n,int m)
{
	if(x<n && y<m && x>=0 && y>=0 && A[x][y] > 0)
	{
		return true;
	}
	return false;
}

bool left(int x,int y,vector<vector<int>> &A)
{
	vector<int> temp = {1,3,6,7};
	for(int i=0;i<(int)temp.size();i++)
	{
		if(A[x][y] == temp[i])
		{
			return true;
		}
	}
	return false;
}

bool right(int x,int y,vector<vector<int>> &A)
{
	vector<int> temp = {1,3,4,5};
	for(int i=0;i<(int)temp.size();i++)
	{
		if(A[x][y] == temp[i])
		{
			return true;
		}
	}
	return false;
}

bool up(int x,int y,vector<vector<int>> &A)
{
	vector<int> temp = {1,2,4,7};
	for(int i=0;i<(int)temp.size();i++)
	{
		if(A[x][y] == temp[i])
		{
			return true;
		}
	}
	return false;
}

bool down(int x,int y,vector<vector<int>> &A)
{
	vector<int> temp = {1,2,5,6};
	for(int i=0;i<(int)temp.size();i++)
	{
		if(A[x][y] == temp[i])
		{
			return true;
		}
	}
	return false;
}

int main() {

	int t;
	cin >> t;    //Reading input from STDIN

	while(t-- > 0)
	{
		int n,m,r,c,l;
		cin>>n>>m>>r>>c>>l;

		vector<vector<int>> A(n,vector<int>(m)),vis(n,vector<int>(m,0));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>A[i][j];
			}
		}

		if(A[r][c] == 0)
		{
			cout<<0<<endl;
			continue;
		}

		int count = 0;
		queue<vector<int>> q;
		q.push({r,c,1});
        vis[r][c] = 1;

		while(!q.empty())
		{
			vector<int> temp = q.front();
			q.pop();
			int x = temp[0];
			int y = temp[1];
			int len = temp[2];
			
			// cout<<x<<y<<len<<endl;
			count++;
			if(len == l)
			{
				continue;
			}
	
			vector<int> dirx = {0,0,-1,1}, diry = {-1,1,0,0};

			for(int i=0;i<4;i++)
			{
				if(check(x + dirx[i],y + diry[i],A,n,m) == 1 && vis[x + dirx[i]][y + diry[i]] == 0)
				{
					// cout<<x<<y<<"original\n";
					// cout<<x + dirx[i]<<y + diry[i]<<"\n"; 
					if(i == 0 && left(x,y,A) == 1 && right(x + dirx[i],y + diry[i],A) == 1)
					{
						// cout<<"Left\n";
						vis[x + dirx[i]][y + diry[i]] = 1;
						q.push({x + dirx[i],y + diry[i],len+1});
					}

					if(i == 1 && right(x,y,A) == 1 && left(x + dirx[i],y + diry[i],A) == 1)
					{
						// cout<<"Right\n";
						vis[x + dirx[i]][y + diry[i]] = 1;
						q.push({x + dirx[i],y + diry[i],len+1});						
					}

					if(i == 2 && up(x,y,A) == 1 && down(x + dirx[i],y + diry[i],A) == 1)
					{
						// cout<<"Up\n";
						vis[x + dirx[i]][y + diry[i]] = 1;
						q.push({x + dirx[i],y + diry[i],len+1});
					}

					if(i == 3 && down(x,y,A) == 1 && up(x + dirx[i],y + diry[i],A) == 1)
					{
						// cout<<"Down\n";
						vis[x + dirx[i]][y + diry[i]] = 1;
						q.push({x + dirx[i],y + diry[i],len+1});
					}
				}
			}
		}

        cout<<count<<endl;
	}


	return 0;
}