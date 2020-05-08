#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int fun(int i,int j,int r,int c,vector<vector<int>> grid)
{
        if(i==r-1 && j==c-1)
            return 1;
        int x=0,y=0;
        if(dp[i][j]>0)
            return dp[i][j];
        if(i<r-1 && grid[i+1][j]!=1)
        {
            x=fun(i+1,j,r,c,grid);
        }
        if(j<c-1 && grid[i][j+1]!=1)
        {
            y=fun(i,j+1,r,c,grid);
        }
        dp[i][j]=x+y;
        return dp[i][j];
}
int main()
{
    vector< vector<int> > v{{0,0,0},{1,0,0},{0,0,0}};
    int row =v.size();
    int col =v[0].size();
    memset(dp,-1,sizeof(dp[0][0])*row*col);
    cout<<fun(0,0,row,col,v)<<endl;
}
