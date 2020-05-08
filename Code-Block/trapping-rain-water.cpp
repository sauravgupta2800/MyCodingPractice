#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v)
{
    int n=v.size();
    int l[n],r[n];
    l[0]=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(l[i-1]<v[i])
            l[i]=v[i];
        else
            l[i]=l[i-1];
    }
    r[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]>r[i+1])
            r[i]=v[i];
        else
        {
            r[i]=r[i+1];
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
        res+=abs(v[i]-min(l[i],r[i]));
    return res;
}
int main()
{
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<fun(v);
}
