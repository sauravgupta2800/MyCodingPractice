#include<bits/stdc++.h>
using namespace std;
bool issame(string str)
{
    int i=0;
    int j=str.size()-1;
    int l=0,r=0;
    while(i<j)
    {
        //cout<<i<<" "<<j<<endl;
        l+=str[i]-'0';
        r+=str[j]-'0';
        i++;
        j--;
    }
    if(l==r)
        return 1;
    return 0;
}

void botton_up(string str)
{
    int n=str.size();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][i]=str[i]-'0';

    int max_len=0;
    for(int len=2;len<=n;len++)
    {
        for(int row=0;row<=n-len;row++)
        {
            int col=row+len-1;
            int k=len/2;
            dp[row][col]=dp[row][col-k]+dp[col-k+1][col];

            if(len%2==0 && dp[row][col-k]==dp[col-k+1][col] && len>max_len)
            {
                max_len=len;
            }
        }
    }
    cout<<"Maximum_length is: "<<max_len<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int edit(string s1,string s2,int i,int j,int m,int n)
{
    if(i==m)
        return n-j;
    if(j==n)
        return m-i;
    if(s1[i]==s2[j])
        return edit(s1,s2,i+1,j+1,m,n);
    int in=1+edit(s1,s2,i,j+1,m,n);
    int rm=1+edit(s1,s2,i+1,j,m,n);
    int rep=1+edit(s1,s2,i+1,j+1,m,n);
    return min(in,min(rm,rep));
}

bool interleaving(string a,string b,string c,int i,int j,int k)
{
    if(i==a.size() && j==b.size() && k==c.size())
        return 1;
    if(k==c.size())
        return 0;
    if(i==a.size() && j==b.size())
        return 0;
    int f=0,s=0;
    if(a[i]==c[k])
        f=interleaving(a,b,c,i+1,j,k+1);
    if(b[j]==c[k])
        s=interleaving(a,b,c,i,j+1,k+1);
    return f|s;
}
int dp[1000][1000];
int coin(int i,vector<int> v,int curr,int sum)
{
    if(curr>sum)
        return 0;
    if(curr==sum)
        return 1;
    if(i==v.size())
        return 0;
    // take and leave
    if(dp[i][curr])
        return dp[i][curr];
    dp[i][curr]=coin(i,v,curr+v[i],sum)+coin(i+1,v,curr,sum);
    return dp[i][curr];
}
int main()
{
    vector<int> v={2,5,3,7};
    int sum=10;
    cout<<coin(0,v,0,sum);
   // string s1="SUNDAY";
    //string s2="SATURDAY";
    //cout<<edit(s1,s2,0,0,6,8)<<endl;
    //cout<<interleaving("xyz","abcd","xabycdz",0,0,0);

  // string str="142124";
   /* int n=str.size();
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j+=2)
        {
            if(issame(str.substr(i,j+1)))
            {
                int len=j-1+1;
                maxi=max(maxi,len);
            }
        }
    }
    cout<<maxi<<endl;

    */
    //botton_up("142124");
}
