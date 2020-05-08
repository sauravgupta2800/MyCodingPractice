#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,string s)
{
    if(i==j)
        return 1;
    if(i>j)
        return 0;
    int count=0;
    if(s[i]==s[j])
        count+=2+fun(i+1,j-1,s);
    else
        count+=max(fun(i+1,j,s),fun(i,j-1,s));
    return count;
}
int fun1(string s)
{
    int n=s.size();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int len=2;len<=n;len++)
    {
        for(int row=0;row<=n-len;row++)
        {
            int col=row+len-1;
            if(s[row]==s[col])
            {
                dp[row][col]=2+dp[row+1][col-1];
            }
            else
                dp[row][col]=max(dp[row][col-1],dp[row+1][col]);
        }
    }
    return dp[0][n-1];

}
int main()
{
    string str="GEEKSFORGEEKS";
    int n=str.size()-1;
    cout<<fun1(str);
}
