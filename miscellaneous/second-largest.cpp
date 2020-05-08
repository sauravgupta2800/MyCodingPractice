#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n=5,i,k=3,sum=0,total=0;
    ll arr[]={2,4,2,4,2};
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    i=-1;
    total=0;
    while(total+k<sum)
    {
        i++;
        total+=arr[i];
        sum-=arr[i];
        cout<<total+k<<" "<<sum<<endl;
    }
    ll f=0,l=i+1;
    ll count=1;
    while(arr[f]+sum-arr[l]>total+k+arr[l]-arr[f] && l<n)
    {
        count++;
        f++;l++;
    }
    cout<<count<<endl;
}
