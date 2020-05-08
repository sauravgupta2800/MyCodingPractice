#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,int r,int c,vector<vector<int>> grid)
    {
        if(i==r-1 && j==c-1)
            return grid[i][j];
        int x=INT_MAX,y=INT_MAX;

        if(i<r-1)
        {
            if(i<r)
            x=fun(i+1,j,r,c,grid)+grid[i][j];
        }
        if(j<c-1)
        {
            if(i<r)
            y=fun(i,j+1,r,c,grid)+grid[i][j];
        }
        return min(x,y);
    }
int main()
{
    vector< vector<int> > v{{1,2},{3,4}};
    //cout<<fun(0,0,2,2,v);
    int row,col;
    row=v.size();
    col=v[0].size();
    vector< vector<int> > dp(row,vector<int>(col,0));
    int i=0,j=0;
    dp[0][0]=v[0][0];
    for(int i=1;i<row;i++)
    {
        dp[i][0]=v[i][0]+dp[i-1][0];
        cout<<dp[i][0]<<" ";
    }
    cout<<endl;
    for(int j=1;j<col;j++)
    {
        dp[0][j]=v[0][j]+dp[0][j-1];
        cout<<dp[0][j]<<" ";
    }

    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+v[i][j];
        }
    }
    cout<<endl;
    cout<<dp[row-1][col-1];

}
