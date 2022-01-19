#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a,vector<int> &b)
{
    return a.size() < b.size();
}

void solve() 
{
    int n;
    cin>>n;
    
    vector<int> A(n);
    vector<vector<int>> X(n);
    vector<bool> Y(n,false);

    for(int i=0;i<n;i++)
    { 
        cin>>A[i];  
    }

    for(int i=0;i<n;i++)
    { 
        int temp = A[i];
        while(temp)
        {
            if(temp <= n && temp >=1)
            { 
                X[i].push_back(temp);
            }
            temp/=2;
        }
    }

    // for(int i=0;i<n;i++)
    // { 
    //     cout<<i+1<<"\n";
    //     for(int j=0)
    // }

    sort(X.begin(),X.end(),cmp);
    // cout<<"here";
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<X[i].size();j++)
        { 
            // cout<<X[i][j];
            if(Y[X[i][j] - 1] == false)
            {
                Y[X[i][j]-1] = true;
                break;
            }
            else if(j == X[i].size() - 1)
            { 
                cout<<"NO";
                return ;
            }
        }
    }

    for(int i=0;i<n;i++)
    { 
        if(Y[i] == false)
        {
            cout<<"NO";
            return ;
        }
    }

    cout<<"YES";
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
