#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second < b.second)
        return 1;
    return 0;
}
int main()
{
    int n=4;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),cmp);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    int end=v[0].second;
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(v[i].first<=end)
        {
            end=max(end,v[i].second);
            c++;
        }
        else
            end=v[i].second;
    }
    cout<<c<<endl;
}
