#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first)
        return 1;
    return 0;
}
int main()
{
    int n;
    int k;
    int p;
    cin>>n>>k>>p;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++)
        v.push_back( make_pair(arr[i],i) );
    sort(v.begin(),v.end(),cmp);
    int dp[n];
    dp[v[0].second]=v[0].first+k;
    for(int i=1;i<n;i++)
    {
        if( (v[i-1].first-v[i].first)<=k)
        {
            dp[v[i].second]=dp[v[i-1].second];
        }
        else
        {
            dp[v[i].second]=v[i].first+k;
        }
    }
    for(int i=0;i<p;i++)
    {
        int a,b;
        cin>>a>>b;
        if(dp[a-1]==dp[b-1])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
