#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={-1,-1,-1};
    int i,max_so_far=INT_MIN,max_ends=0,start=0,end=0,s=0;
    bool entered=false;
    vector<int> res;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
        else
        {
            v[i]=-1;
        }
    }
    for(i=0;i<v.size();i++)
    {
        max_ends+=v[i];
        if(max_so_far<max_ends)
        {
            max_so_far=max_ends;
            start=s;
            end=i;
            entered=true;
        }
        if(max_ends<0)
        {
            max_ends=0;
            s=i+1;
        }
    }
    res.push_back(start+1,end+1);
    return res;
}
