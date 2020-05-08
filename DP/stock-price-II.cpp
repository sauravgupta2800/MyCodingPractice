#include<bits/stdc++.h>
using namespace std;

int fun(int i,int bought,vector<int> &v,vector< vector<int> > &v2)
{
    if(i==v.size())
        return 0;
    int x=INT_MIN,y=INT_MIN,z=INT_MIN;
    if(v2[i][bought]!=-1)
        return v2[i][bought];
    if(!bought)
        x=fun(i+1,1,v,v2)-v[i];
    else
        y=fun(i+1,0,v,v2)+v[i];
    z=fun(i+1,bought,v,v2);
    v2[i][bought]=max(x,max(y,z));
    return v2[i][bought];
}
int main()
{
    vector<int> v={1,2,3};
    //size initialize
    int n=v.size();
    vector< vector<int> > v2(n,vector<int>(2,-1));
    cout<<fun(0,0,v,v2);
}
