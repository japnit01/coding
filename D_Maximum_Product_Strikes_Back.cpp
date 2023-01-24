#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define vi vector<int>

void solve() 
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
 int max_fwd = INT_MIN, max_bkd = INT_MIN;
 
    // Initialize current product
    int max_till_now = 1;
 
    //check if zero is present in an array or not
    bool isZero=false;
     
    // max_fwd for maximum contiguous product in
    // forward direction
    // max_bkd for maximum contiguous product in
    // backward direction
    // iterating within forward direction in array
    for (int i=0; i<n; i++)
    {
        // if A[i]==0, it is breaking condition
        // for contiguous subarray
        max_till_now = max_till_now*A[i];
        if (max_till_now == 0)
        {  
             isZero=true;
             max_till_now = 1;
            continue;
        }
        if (max_fwd < max_till_now) // update max_fwd
            max_fwd = max_till_now;
    }
 
     max_till_now = 1;
 
    // iterating within backward direction in array
    for (int i=n-1; i>=0; i--)
    {
        max_till_now = max_till_now * A[i];
        if (max_till_now == 0)
        {
            isZero=true;
            max_till_now = 1;
            continue;
        }
 
        // update max_bkd
        if (max_bkd < max_till_now)
            max_bkd = max_till_now;
    }
 
    // return max of max_fwd and max_bkd
    int res =  max(max_fwd, max_bkd);
 
    // Product should not be negative.
    // (Product of an empty subarray is
    // considered as 0)
    if(isZero)
        cout << max(res, 0);
        return;
 
    cout<<res;
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
