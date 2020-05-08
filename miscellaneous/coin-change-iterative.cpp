#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,5};
    int V=11;
    int dp[V+1];
    memset(dp,INT_MAX,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=V;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(i<=v[j])
            {
                int prev=dp[i-v[j]];
                if(prev!=INT_MAX && prev+1<dp[i])
                    dp[i]=prev+1;
            }
        }
    }
    cout<<dp[V];
}
