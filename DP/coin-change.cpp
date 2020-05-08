#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int dp[1000];
int fun(int curr_sum)
{
    if(curr_sum==0)
        return 0;
    if(dp[curr_sum]!=-1)
        return dp[curr_sum];
    int mini=INT_MAX;
    int res=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(curr_sum>=v[i])
        {
            mini=1+fun(curr_sum-v[i]);
            if(mini<res)
                res=mini;
        }
    }
    dp[curr_sum]=res;
    return dp[curr_sum];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    v={9,6,5,1};
    cout<<fun(11);
}
