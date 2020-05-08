#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
string a,b;
int N,M;
int fun(int i,int j)
{
    if(i==N || j==M)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(a[i]==b[j])
        return 1+fun(i+1,j+1);
    dp[i][j]= max(fun(i+1,j),fun(i,j+1));
    return dp[i][j];
}
int main()
{
    a="AGGTAB";
    b="GXTXAYB";
    N=a.length();
    M=b.length();
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            dp[i][j]=-1;
    }
    cout<<fun(0,0);
}
