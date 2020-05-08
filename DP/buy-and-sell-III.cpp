#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10, 22, 5, 75, 65, 80};
    int n=v.size();
    vector<int> profit(n,0);
    int maxi=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]>maxi)
            maxi=v[i];
        profit[i]=max(profit[i+1],maxi-v[i]);
        //cout<<profit[i]<<" ";
    }
    int mini=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]<mini)
            mini=v[i];
        profit[i]=max(profit[i-1],profit[i]+v[i]-mini);
    }
    cout<<profit[n-1];
}
