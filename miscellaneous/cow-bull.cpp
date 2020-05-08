#include<bits/stdc++.h>
using namespace std;
int main()
{
    string v1="00112233445566778899";
    string v2="16872590340158679432";
    int dp[10];
    memset(dp,0,sizeof(dp));
    int i=0;
    int n=v1.size();
    
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(v1[i]==v2[i])
        {
            a++;
        }
        else
        {
            dp[v1[i]-'0']++;
        }
    }
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            //cout<<v2[i]<<endl;
            if(dp[v2[i]-'0']>0)
            {
                dp[v2[i]-'0']--;
                b++;
            }
        }
    }
    string res=to_string(a)+"A"+to_string(b)+"B";
    cout<<res<<endl;
    cout<<"a"<<a<<" b"<<b;
}
