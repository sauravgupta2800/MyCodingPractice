#include<bits/stdc++.h>
using namespace std;
int dp[6000];
int fun(string d,int n)
{
    if(n==1 || n==0)
        return 1;
    int x=0,y=0;
    if(dp[n]>0)
        return dp[n];
    if(d[n-1]>'0')
        x=fun(d,n-1);
    if( (d[n-2]=='1'&& d[n-1]<='9') || (d[n-2]=='2' && d[n-1]<'7'))
        y=fun(d,n-2);
    dp[n]=x+y;
    return dp[n];
}
int main()
{
    //string str1="3333333333";
    //memset(dp,-1,sizeof(dp));
    //cout<<fun(str1,str1.length())<<endl;

    string str;
    while(1)
    {
        cin>>str;
        if(str[0]=='0')
            break;
        memset(dp,-1,sizeof(dp));
        cout<<fun(str,str.length())<<endl;

    }
}
