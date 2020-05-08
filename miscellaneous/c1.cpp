#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    unordered_map<int,int> umap;
    cin>>n;
    int arr[n];
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        umap[arr[i]]+=1;
    }
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(maxi%arr[i]!=0)
            res*=arr[i];
    }
    if(res==1)
        res=maxi;
    cout<<maxi<<" "<<res;

}
