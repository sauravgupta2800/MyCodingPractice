#include<bits/stdc++.h>
using namespace std;

int dp[10000][10000];
int diff(vector<int> v)
{
    int maxi=0;
    for(int i=0;i<v.size();i++)
    {
        maxi=max(maxi,v[i]);
    }
    int res=0;
    for(int i=0;i<v.size();i++)
    {
        res+=abs(maxi-v[i]);
    }
    return res;
}
int fun(int i,int stop,vector<int> v,vector<int> help)
{
    if(help.size()==stop)
    {
        /*for(int l=0;l<help.size();l++)
        {
            cout<<help[l]<<" ";
        }
        cout<<endl;
        cout<<diff(help)<<endl;*/
        return diff(help);
    }
    if(i>=v.size())
        return INT_MAX;
    // take
    if(dp[i][stop])
        return dp[i][stop];
    int x=INT_MAX;
    int y=INT_MAX;
    help.push_back(v[i]);
    x=fun(i+1,stop,v,help);

    //leave
    help.pop_back();
    y=fun(i+1,stop,v,help);
    dp[i][stop]=min(x,y);
    return dp[i][stop];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        memset(dp,0,sizeof(dp));
        vector<int> v;
        vector<int> help;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x; v.push_back(x);
        }
        cout<<fun(0,q,v,help)<<endl;
    }
}
