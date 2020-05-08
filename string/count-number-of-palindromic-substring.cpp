#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="banana";
    int n=s.size();
    bool dp[n][n];
    int count=0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
        count++;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i][i+1]=1;
            count++;
        }
    }
    for(int curr_len=3;curr_len<=n;curr_len++)
    {
        for(int i=0;i<n-curr_len+1;i++)
        {
            int j=i+curr_len-1;
            if(s[i]==s[j] && dp[i+1][j-1])
            {
                dp[i][j]=1;
                count++;
            }
        }
    }
    cout<<count;
}
