#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> umap;
int fun(int arr[],int N)
{
    if(N<=0)
        return 0;
    if(umap.find(N)==umap.end())
    {
        int MAX=INT_MIN;
        for(int i=0;i<N;i++)
        {
            MAX=max(MAX,arr[i]+fun(arr,N-i-1));
        }
        umap[N]=MAX;
    }
    return umap[N];
}


int BOTTOM_UP(int p[],int N)
{
    int dp[N+1];
    dp[0]=0;
    for(int i=1;i<=N;i++)
    {
        int q=INT_MIN;
        for(int j=0;j<i;j++)
            q=max(q, p[j]+dp[i-j-1]);
        dp[i]=q;
    }
    return dp[N];
}
int main()
{
    int price[]={1,5,8,9,10,17,17,20,24,30};
    cout<<BOTTOM_UP(price,4);
}
