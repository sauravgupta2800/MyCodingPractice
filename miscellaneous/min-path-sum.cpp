#include<bits/stdc++.h>
using namespace std;
int fun(int i,int j,int r,int c,vector<vector<int>> grid)
    {
        if(i==r-1 && j==c-1)
            return grid[i][j];
        int x=0,y=0;
        if(i<r)
            x=fun(i+1,j,r,c,grid)+grid[i][j];
        if(j<c)
            y=fun(i,j+1,r,c,grid)+grid[i][j];
        return min(x,y);
    }
int main()
{
    vector< vector<int> v{{1,3,1},{1,5,1},{4,2,1}};
    cout<<fun(0,0,3,3,v);

}
