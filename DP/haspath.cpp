#include<bits/stdc++.h>
using namespace std;

static vector<int> dp(100,-1);

bool fun(int pos,int n)
{
    if(pos==n)
        return 1;
    if(pos>n)
        return 0;
    if(dp[pos]!=-1)
        return dp[pos];
    bool x=fun(pos+3,n);
    bool y=fun(pos+4,n);
    //return x||y;
    dp[pos]=x+y;
    return dp[pos];
}

int stairs(int step,vector<int> v)
{
    if(step==1)
        return 1;
    if(step==2)
        return 2;
    if(step<0)
        return 0;
    if(v[step]!=-1)
        return v[step];
    int x=stairs(step-1,v);
    int y=stairs(step-2,v);
    v[step]=x+y;
    return v[step];
}

int main()
{
    int step=2;
    vector<int> v(step+1,-1);
    cout<<stairs(step,v);
}
