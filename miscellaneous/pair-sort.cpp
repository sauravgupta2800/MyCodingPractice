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
    vector<int> a={1,3,2,5,8,5};
    vector<int> b={2,4,6,7,9,9};
    vector< pair<int,int> > p;
    for(int i=0;i<a.size();i++)
    {
        p.push_back(make_pair(a[i],b[i]));
    }
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
    int curr_init=0;
    int curr_end=0;
    int prev_end=0;
    int c=0;
    for(int i=0;i<p.size();i++)
    {
        curr_init=p[i].first;
        curr_end=p[i].second;
        if(curr_init>=prev_end)
        {
            prev_end=curr_end;
            c++;
        }
    }
    cout<<c<<endl;

}
