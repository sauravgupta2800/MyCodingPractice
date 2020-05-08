#include<bits/stdc++.h>
using namespace std;
void subset(int i,vector<int> v,int N,vector<int> &h,vector< vector<int> > &res)
{
    if(i==N)
    {
        res.push_back(h);
        return;
    }
    //leave
    subset(i+1,v,N,h,res);
    //take
    h.push_back(v[i]);
    subset(i+1,v,N,h,res);
    h.pop_back();
}
int main()
{
    vector<int> v={1,2,2};
    sort(v.begin(),v.end());
    vector< vector<int> > res;
    vector<int> h;
    subset(0,v,v.size(),h,res);
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
