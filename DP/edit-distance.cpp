#include<bits/stdc++.h>
using namespace std;

int M,N;
string a,b;

int dp[1000][1000];
int fun(int i,int j)
{
    if(i==N)
        return M-j;
    if(j==M)
        return N-i;
    if(a[i]==b[j])
        return fun(i+1,j+1);
    if(dp[i][j]>0)
        return dp[i][j];
    int d=1+fun(i+1,j);
    int insert=1+fun(i,j+1);
    int replace=1+fun(i+1,j+1);
    dp[i][j]=min(d,min(insert,replace));
    return dp[i][j];
}
int main()
{
    b="ab";a="bc";
    N=a.length();M=b.length();
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            dp[i][j]=-1;
    }
    cout<<fun(0,0)<<endl;
    N=0,M=0,a="",b="";
}
