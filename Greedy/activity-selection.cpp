#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second<b.second)
        return 1;
    return 0;
}
int main()
{
    int n=6;
    int s[n]={1,3,0,5,8,5};
    int e[n]={2,4,6,7,9,9};
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++)
        v.push_back(make_pair(s[i],e[i]));
    sort(v.begin(),v.end(),cmp);
    int curr_end=v[0].second;
    cout<<1<<" ";
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=curr_end)
        {
            curr_end=v[i].second;
            cout<<i+1<<" ";
        }
    }
}
