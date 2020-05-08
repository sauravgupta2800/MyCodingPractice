#include<bits/stdc++.h>
using namespace std;
int X,Y,N;
//unordered_map<string,int> m;
int m[10000][10000];
int fun(int i,int j,int A[],int B[])
{
    if(i==N)
        return 0;
    if(m[i][j]!=-1)
        return m[i][j];
    int andy=j;
    int res=0;
    if(andy+1<=X)
    {
        res=max(res,A[i]+fun(i+1,j+1,A,B));
    }
    int bob=i-j;
    if(bob+1<=Y)
    {
        res=max(res,B[i]+fun(i+1,j,A,B));
    }
    m[i][j]=res;
    return m[i][j];
}
int main()
{
    memset(m,-1,sizeof(m));
    cin>>N>>X>>Y;
    int A[N];
    int B[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<N;i++)
        cin>>B[i];
    cout<<fun(0,0,A,B);
    N=0,X=0,Y=0;
}
