#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> umap;
int fun(int i,int arr[],int n,int sum,int total)
{
    if(i==n)
    {
        return abs((total-sum)-sum);
    }
    string key=to_string(i)+"|"+to_string(sum);
    if(umap.find(key)==umap.end())
    {
        umap[key]=min( fun(i+1,arr,n,sum+arr[i],total), fun(i+1,arr,n,sum,total));
    }
    return umap[key];
}
int main()
{
    int n=4;
    int arr[]={36,7,46,40};
    int total=0;
    for(int i=0;i<n;i++)
        total+=arr[i];
    cout<<fun(0,arr,n,0,total);
}
