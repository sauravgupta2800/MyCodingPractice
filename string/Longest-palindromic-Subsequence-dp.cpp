#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="LPASPAL";
    int n=s.size();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int curr_len=2;curr_len<=n;curr_len++)
    {
        for(int i=0;i<n-curr_len+1;i++)
        {
            int j=i+curr_len-1;
            if(s[i]==s[j])
            {
                dp[i][j]=2+dp[i+1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[0][n-1];
}
