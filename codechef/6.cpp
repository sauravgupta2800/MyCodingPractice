#include<bits/stdc++.h>
using namespace std;

void fun(int i,vector<int> v,int capacity,int gain,int step,int &res)
{
    if(i==v.size())
    {
        res=max(res,step);
        return;
    }
    // charge it there a conditin
    if(v[i]<=capacity)
    {
        fun(i+1,v,capacity-v[i],gain,step+1,res);
    }
    // leave it
    fun(i+1,v,capacity+gain,gain,step,res);
}
int main()
{
    int n,k,b;
    cin>>n>>k>>b;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int res;
    fun(0,v,k,b,0,res);
    cout<<res<<endl;
}
