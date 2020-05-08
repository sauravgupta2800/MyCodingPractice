#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(abs(a.first-a.second)>abs(b.first-b.second))
        return 1;
    return 0;
}
int main()
{
    int n,X,Y;
    cin>>n>>X>>Y;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end(),cmp);
    /*for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    int total;
    int andy=0,bob=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].first < v[i].second)
        {
            if(bob+1<=Y)
            {
                bob++;
                total+=v[i].second;
            }
            else
            {
                andy++;
                total+=v[i].first;
            }
        }
        else
        {
            if(andy+1<=X)
            {
                andy++;
                total+=v[i].first;
            }
            else
            {
                bob++;
                total+=v[i].second;
            }
        }
    }
    cout<<total;

}
