#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> v,int i,vector<int> &h,vector< vector<int> > &res,int size,int k)
{
    if(i==v.size())
    {
        if(size==k)
        {
            res.push_back(h);
        }
        return ;
    }
    // leave
    subset(v,i+1,h,res,size,k);
    // take
    h.push_back(v[i]);
    subset(v,i+1,h,res,size+1,k);
    h.pop_back();
}


int main()
{
    vector<int> v={1,2,3,4};
    vector<int> helper;
    vector< vector<int> > res;
    int k=2;
    subset(v,0,helper,res,0,k);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
