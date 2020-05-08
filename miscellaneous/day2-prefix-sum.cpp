#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n;
    cin>>n>>q;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum[n];
    sum[0]=v[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+v[i];
    }
    int l,r,curr=0,res=0;
    while(q--)
    {
        cin>>l>>r;
        if(l-1==0)
        {
            curr=sum[r-1];
        }
        else
        {
            curr=sum[r-1]-sum[l-2];
        }
        if(curr>0)
        {
            res+=curr;
        }
    }
    cout<<res<<endl;
}
