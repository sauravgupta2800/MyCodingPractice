#include<bits/stdc++.h>
using namespace std;
int fun(int i,int arr[], int sum,int N)
{
    if(sum==0)
        return 1;
    if(i==N)
    {
        if(sum==0)
            return 1;
        return 0;
    }
    if(arr[i]>sum)
    {
        return fun(i+1,arr,sum,N);
    }
    return fun(i+1,arr,sum-arr[i],N)||fun(i+1,arr,sum,N);
}
int main()
{
    int arr[]={1,2,5};
    int n=4;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    if(sum%2==0)
        sum=sum/2;
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=sum;i++)
        dp[0][i]=0;
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][sum];
}
