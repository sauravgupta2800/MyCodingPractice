#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5,
              13, 3, 11, 7, 15};
    int n=v.size();
    int dp[n+1];
    dp[0]=1;
    int i=0,j=0;
    for(int i=1;i<n;i++)
    {
        int m=0;
        int j=i-1;
        while(j>=0)
        {
            if(v[j]<v[i])
                m=max(m,dp[j]);
            j--;
        }
        dp[i]=m+1;
    }
    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<endl;
    int dp2[n+1];
    dp2[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        int j=i+1;
        int m=0;
        while(j<=n-1)
        {
            if(v[j]<v[i])
                m=max(m,dp2[j]);
            j++;
        }
        dp2[i]=m+1;
    }
    int m=0;
    for(int i=0;i<n;i++)
        m=max(m,dp[i]+dp2[i]-1);
    cout<<m<<endl;

}
