#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(1e6,true);
void print(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void isPrime()
{
    prime[0] = false;
    prime[1] = false;
    for (int i=2; i*i<1e6; i++)
    {
        if (prime[i] == true)
        {
            for (int j=i*i; j<1e6; j+=i)
                prime[j] = false;
        }
    }

}

int main()
{
    isPrime();
    int t;
    cin>>t;

    while(t > 0)
    {
        int e,n;
        cin>>n>>e;

        vector<int> A(n);
        vector<long long> ones(n,0LL);
        vector<long long> oneback(n,0LL);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i] == 1)
            {
                ones[i]++;
                oneback[i]++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(A[i] == 1 && (i-e >= 0 && A[i-e] == 1))
            {
                ones[i]+=ones[i-e];
            }
        }

        for(int i=n-1;i>=0;i--)
        {
            if(A[i] == 1 && (i+e<n && A[i+e] == 1))
            {
                oneback[i]+=oneback[i+e];
            }
        }

        // for(int i=0;i<n;i++)
        // {
        //     cout<<ones[i]<<" ";
        // }

        vector<long long> amt(n,0LL);
        for(int i=0;i<n;i++)
        {
            if(i-e>=0)
            {
                if(prime[A[i]] && A[i-e] == 1)
                {
                    amt[i]+=ones[i-e];
                }
            }
            // print(amt,n);
            if(i+e<n)
            {
                if(prime[A[i]] && A[i+e] == 1)
                {
                    amt[i]+=oneback[i+e];
                }
            }
            // print(amt,n);
            if(prime[A[i]] && i-e>=0 && i+e<n)
            {
                amt[i]+=(ones[i-e] * oneback[i+e]);
            }
            // print(amt,n);
        }

        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=amt[i];
        }

        cout<<sum<<"\n";
        t--;
    }
}