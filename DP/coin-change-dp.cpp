#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> umap;

int fun(int arr[],int N,int sum)
{
    if(sum==0)
        return 1;
    if(sum<0)
        return 0;
    if(N<=0 && sum>=1)
        return 0;
    string key=to_string(N)+"|"+to_string(sum);
    if( umap.find(key)==umap.end())
    {
         umap[key]=fun(arr,N,sum-arr[N-1])+fun(arr,N-1,sum);
    }
    return umap[key];
}
int main()
{
    int c[]={9, 6, 5, 1};
    //cout<<fun(c,4,11);
    int size=sizeof(c)/sizeof(c[0]);
    int sum=11;
    int dp[sum+1][size];
    for(int i=0;i<size;i++)
        dp[0][i]=i;
    for(int i=0;i<=sum;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i>=c[j])
                dp[i][j]=min(dp[i][j-1],dp[i-c[j]][j]);
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    cout<<dp[sum][size-1];
}
