#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,vector<int> v)
{
    if(i==j)
        return 0;
    int ans=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int tmp=fun(i,k,v)+fun(k+1,j,v)+v[i-1]*v[k]*v[j];
        ans=min(ans,tmp);
    }
    return ans;
}
int fun1(vector<int> v)
{
    int n=v.size();
    int dp[n][n];
    for(int i=1;i<n;i++)
        dp[i][i]=0;
    for(int L=2;L<n;L++)
    {
        for(int i=1;i<=n-L;i++)
        {
            int j=i+L-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+v[i-1]*v[k]*v[j]);
        }
    }
    return dp[1][n-1];
}
int main()
{
    vector<int> v={1,2,3,4};
    cout<<fun(1,v.size()-1,v)<<endl;
    cout<<fun1(v)<<endl;
}
