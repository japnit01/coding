#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }

        int f = 1;
        vector<int> factors;

        while (f * f <= sum)
        {
            if (sum % f == 0)
            {
                factors.push_back(f);
                factors.push_back(sum / f);
            }
            f++;
        }
        int ans = 1e9;
        for(int f:factors)
        {
            // cout<<f<<" ";
            // cout<<"fact\n";
            // can_i_break array into contigous segments of sum=f, if yes which is thickness
            int i = 0;
            int thickness = 0;
            bool bad=0;
            while(i < n)
            {
                int j = i,sum = 0;
                while(j < n && sum < f)
                {
                    sum+=A[j];
                    j++;
                }
                
                if(sum != f)
                {
                    bad=1;
                    break;
                }
                else
                {
                    thickness = max(thickness,j - i);
                }

                i = j;
            }


            if(!bad)
            ans = min(ans,thickness);
        }

        cout<<ans<<endl;
    }
}