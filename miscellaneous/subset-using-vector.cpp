#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> v,int i,vector<int> &h,vector< vector<int> > &res)
{
    if(i==v.size())
    {
        res.push_back(h);
        return ;
    }
    // leave
    subset(v,i+1,h,res);
    // take
    h.push_back(v[i]);
    subset(v,i+1,h,res);
    h.pop_back();
}
int main()
{
    vector<int> v={1,2,2};
    vector<int> helper;
    vector< vector<int> > res;
    subset(v,0,helper,res);
    sort(res.begin(),res.end());
    //res.erase(unique(res.begin(),res.end()),res.end());
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
