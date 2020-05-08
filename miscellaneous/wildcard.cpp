#include<bits/stdc++.h>
using namespace std;

int M,N;
string a,b;

int dp[1000][1000];
bool fun(int i,int j)
{
    /*for(int l=i;l<N;l++)
        cout<<a[l];
    cout<<endl;

    for(int g=j;g<M;g++)
        cout<<b[g];
    cout<<endl;
    cout<<endl;*/

    if(i==N && j==M)
        return 1;
    if(i==N || j==M)
        return 0;
    if(dp[i][j]>-1)
        return dp[i][j];
    if(b[j]!='?' && b[j]!='*' && a[i]!=b[j])
        return 0;
    if(b[j]=='?' || a[i]==b[j])
        return fun(i+1,j+1)+fun(i,j+1);
    int x=0,y=0;
    if(b[j]=='*')
    {
        //take
        x=fun(i+1,j+1)+fun(i+1,j)+fun(i,j+1);

    }
    dp[i][j]=x;
    return dp[i][j];
}
int main()
{
    a="a";b="a*";
    N=a.length();M=b.length();
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            dp[i][j]=-1;
    }
    cout<<fun(0,0)<<endl;
    N=0,M=0,a="",b="";
}
