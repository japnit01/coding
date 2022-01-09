#include<bits/stdc++.h>
using namespace std;

bool check(int x,vector<int> A,int n) {
    vector<int> B = A;
    for(int i=n-1;i>=2;i--)
    {
        if(A[i] < x)
        {
            return false;
        }
        int rem = min((A[i] - x),B[i])/3;
A[i-1] += rem;
A[i-2] += (rem*2);
    }

    if(A[0] < x || A[1] <x)
    { 
        return false;
    }
    return true;
}

void solve() 
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int l = *min_element(A.begin(), A.end()) ,r = *max_element(A.begin(), A.end()),ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(check(mid,A,n))
        {
            ans = mid;
            l = mid+1;
        }
        else
        { 
            r=  mid - 1;
        }
    }
    cout<<ans;
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
