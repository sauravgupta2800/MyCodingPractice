#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> umap;
int fun(int i,int v[],int w[],int N,int curr)
{
    if(i==N || curr==0)
        return 0;
    string key=to_string(i)+"|"+to_string(curr);
    if(umap.find(key)==umap.end())
    {
        if(w[i]>curr)
            return fun(i+1,v,w,N,curr);
        int take=fun(i,v,w,N,curr-w[i])+v[i];
        int leave=fun(i+1,v,w,N,curr);
        umap[key]=max(take,leave);
    }
    return umap[key];
}
int main()
{
    int v[]={60,10,20};
    int w[]={2,3,3};
    cout<<fun(0,v,w,3,8);
}
