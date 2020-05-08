#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long dp[10000][10000];
ll nCr(ll n,ll r)
{
    if(r==0||n==r)
        return 1;
    if(dp[n][r])
        return dp[n][r];
    dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
    return dp[n][r];
}
int main()
{
    ll n;
    cin>>n;
    ll total=nCr(n,2);
    pair<int,int> p;
    vector< pair<ll,ll> > v;//={make_pair(8,10),make_pair(4,9),make_pair(6,7),make_pair(1,2)};
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    //cout<<endl;*/
    sort(v.begin(),v.end());
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    // find the bad pairs or disjoint sets
    // v[i].second<v[i+1].first====BAD PAIRS
    ll bad=0;
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=i+1;j<v.size();j++)
        {
            if(v[i].second<v[j].first)
            {
                bad++;
            }
        }
    }
    cout<<total-bad<<endl;
}
