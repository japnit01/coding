#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void rotateleft(vector<int>& A,int d,int n)
{
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {

        // cout<<i << " "<<(i+d-2)%n<<"\n";
        temp[(i+d-2)%n] = A[i];
    }

    for(int i = 0 ;i<n;i++)
    {
        A[i] = temp[i];
    }
}

void solve() 
{
    int n;
    cin>>n;

    deque<int> q;
    vector<int> A(n),ans(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        A[i]--;
        q.push_back(A[i]);
    }

    for(int i = n-1;i>=0;i--)
    {
        while(q.back() != i)
        {
            int temp = q.front();
            q.pop_front();
            q.push_back(temp);
            ans[i]++;
        }

        q.pop_back();
    }

        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        // cout<<"\n";
   
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
