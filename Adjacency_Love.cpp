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

    vector<int> odd,even;


    int cnto = 0,cnte = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];

        if(A[i]%2)
        {
            cnto++;
            odd.push_back(A[i]);
        }
        else
        {
            cnte++;
            even.push_back(A[i]);
        }
    }

    if(cnto == 0)
    {
        cout<<-1;
        return ;
    }

    if(cnto%2 == 0)
    {
        for(int i=0;i<odd.size();i++)
        {
            cout<<odd[i]<<" ";
        }

        for(int j=0;j<even.size();j++)
        {
            cout<<even[j]<<" ";
        }

    }
    else if(cnto>2 && cnto%2 == 1 && cnte>0)
    {
        int i;
        for(i=0;i<cnto-1;i++) 
        {
            cout<<odd[i]<<" ";
        }


        int j=0;
        while(i<odd.size() || j <even.size())
        {
            if(j<even.size())
            {
                cout<<even[j]<<" ";
            }

            if(i<odd.size())
            {
                cout<<odd[i]<<" ";
            }      

            i++;
            j++;
        }

    }
    else
    {
        cout<<-1;
    }



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
