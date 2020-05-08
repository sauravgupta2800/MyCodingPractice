#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[]={1,4,5,3};
    int n=4;
    int total=11;
    int dp[n+1][total+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int i=0;i<=total;i++)
        dp[0][i]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=total;j++)
        {
            if(j>=coin[i-1])
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coin[i-1]]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=total;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<"sum: "<<dp[n][2]<<" "<<dp[n][4]<<" "<<dp[n][6]<<" "<<dp[n][8];
}
