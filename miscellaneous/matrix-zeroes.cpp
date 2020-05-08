#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> > v{{1,0,1},{1,1,1},{0,1,1}};
    int row=v.size();
    int col=v[0].size();
    int i,j;
    int row_flag=0,col_flag=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0 && v[i][j]==0)
            {
                row_flag=1;
            }
            if(j==0 && v[i][j]==0)
            {
                col_flag=1;
            }
            if(v[i][j]==0)
            {
                v[0][j]=0;
                v[i][0]=0;
            }
        }
    }
    for(i=1;i<row;i++)
    {
        for(j=1;j<col;j++)
        {
            if(v[0][j]==0 || v[i][0]==0)
                v[i][j]=0;
        }
    }
    if(row_flag)
    {
        for(i=0;i<col;i++)
        {
            v[0][i]=0;
        }
    }
    if(col_flag)
    {
        for(i=0;i<row;i++)
            v[i][0]=0;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
