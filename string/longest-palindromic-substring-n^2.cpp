#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="bb";
    int n=s.size();
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    int start=0;
    int end=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i][i+1]=1;
            start=i;
            end=2;
        }
    }
    for(int curr_len=3;curr_len<=n;curr_len++)
    {
        for(int row=0;row<n-curr_len+1;row++)
        {
            int col=row+curr_len-1;
            if(s[row]==s[col] && dp[row+1][col-1])
            {
                dp[row][col]=1;
                start=row;
                end=curr_len;
            }
            cout<<start<<" + "<<end<<endl;
        }
    }
    cout<<start<<" + "<<end<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<"     ";
        }
        cout<<endl;
    }
    cout<<s.substr(start,end);
}
