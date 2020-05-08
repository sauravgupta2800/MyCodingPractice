#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,1,1,0,4};
    int n=v.size();
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
        dp[i]=INT_MAX;
    int i=0,j=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+v[j]>=i)
            {
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
}
