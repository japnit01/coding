#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin>>n;

    vector<int> K(n),H(n);
    for(int i=0;i<n;i++)
    { 
        cin>>K[i];
    }
    for(int i=0;i<n;i++)
    { 
        cin>>H[i];
    }

    long long h,l;
    vector<pair<long long,long long>> A;
    for(int i=0;i<n;i++)
    { 
        h = K[i];
        l = K[i] - H[i] + 1;
        A.push_back({l,h});
    }

    sort(A.begin(),A.end());
    h = 0;
    l = 1;
    long long ans = 0;
    for(int i=0;i<n;i++)
    { 
        if(A[i].first > h)
        { 
            ans+=((h-l+1)*(h-l+2))/2;
            l = A[i].first; 
            h = A[i].second;
        }
        else
        { 
            h = max(h,A[i].second);
        }
    }
    ans+=((h-l+1)*(h-l+2))/2;

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
