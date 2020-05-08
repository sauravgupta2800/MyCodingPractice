#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int arr[120];
int n;
int dp[10000][10000];
int fun(int i,int g)
{
    if(i==n)
    {
        if(g==1)
            return 1;
        return 0;
    }
    if(dp[i][g]!=-1)
        return dp[i][g];
    dp[i][g]=fun(i+1,g)+fun(i+1,gcd(g,arr[i]));
    return dp[i][g];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int res=0;
        for(int i=0;i<n;i++)
            res+=fun(i+1,arr[i]);
        cout<<res<<endl;
    }
}
