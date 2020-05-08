#include<bits/stdc++.h>
using namespace std;
unordered_map<string,long long int> umap;
long long int fun(long long int i,long long int xo,long long int arr[],long long int N,long long int k)
{
    if(i==N)
    {
        long long int res=xo^k;
        //cout<<res<<endl;
        return res;
    }
    string key=to_string(i)+"|"+to_string(xo);
    if(umap.find(key)==umap.end())
    {
        umap[key]=max(fun(i+1,xo,arr,N,k),fun(i+1,xo^arr[i],arr,N,k) );
    }
    return umap[key];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            cin>>arr[i];
        cout<<fun(0,0,arr,n,k)<<endl;
        umap.clear();
    }

}
