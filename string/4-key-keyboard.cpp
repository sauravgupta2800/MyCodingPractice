#include<bits/stdc++.h>
using namespace std;
int dp[100];
int fun(int n)
{
    if(n<=6)
        return n;
    if(dp[n]>0)
        return dp[n];
    int maxi=INT_MIN;
    for(int i=2;i<=n-2;i++)
    {
        int tmp=i*fun(n-i-1);
        if(tmp>maxi)
        {
            maxi=tmp;
        }
    }
    dp[n]=maxi;
    return dp[n];
}
int main()
{
    cout<<fun(11);
}
