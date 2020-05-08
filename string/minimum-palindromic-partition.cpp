#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abccd";
    int n=s.size();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        dp[i][i]=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            dp[i][i+1]=1;
    }
    for(int curr_len=3;curr_len<=n;curr_len++)
    {
        for(int i=0;i<n-curr_len+1;i++)
        {
            int j=i+curr_len-1;
            if(s[i]==s[j] && dp[i+1][j-1])
            {
                dp[i][j]=1;
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
    int cuts[n];
    for(int i=0;i<n;i++)
    {
        int tmp=INT_MAX;
        if(dp[0][i]==1)
        {
            cuts[i]=0;
        }
        else
        {
            // traverse j to i repersetrs cuts if not palindrome
            for(int j=0;j<i;j++)
            {
                if(dp[j+1][i] && tmp>cuts[j]+1)
                {
                    tmp=cuts[j]+1;
                }
            }
            cuts[i]=tmp;
        }
    }
    cout<<cuts[n-1];
}
