#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v[]={7,8,4};
    int wt[]={3,8,6};
    int n=3,W=11;

    int mat[2][W+1];
    memset(mat,0,sizeof(mat));
    int i=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i]<=j)//take
                    mat[0][j]=max( v[i]+ mat[1][j-wt[i]], mat[0][j]);
                else
                    mat[0][j]=mat[1][j];
            }
        }
        else
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i]<=j)//take
                    mat[1][j]=max( v[i]+ mat[0][j-wt[i]], mat[0][j]);
                else
                    mat[1][j]=mat[0][j];
            }
        }
    }
        cout<<mat[0][W];
        cout<<mat[1][W];

    // 2-D matrix
    /*int mat[n+1][W+1];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
                mat[i][j]=0;
            else if(wt[i-1]>j)// leave
                mat[i][j]=mat[i-1][j];
            else // take
                mat[i][j]=max(v[i-1]+mat[i-1][j-wt[i-1]], mat[i-1][j]);
        }
    }
    cout<<mat[n][W];*/
}
