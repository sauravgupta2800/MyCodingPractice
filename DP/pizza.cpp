#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int H[n];
        int K[n];
        int total=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            H[i]=2*x;
            total=max(total,H[i]);
        }
        for(int i=0;i<n;i++)
            cin>>K[i];
        int dp[n+1][total+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int i=0;i<=total;i++)
            dp[0][i]=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=total;j++)
            {
                if(j>=K[i-1])
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-K[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        /*for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=total;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=dp[n][H[i]];
        }
        cout<<sum<<endl;
    }
}
