#include<bits/stdc++.h>
using namespace std;
long long Bsearch(long long arr[],long long low,long long high,long long key)
{
    if(key<arr[low])
        return low-1;
    if(key>arr[high])
        return high;
    long long mid=low+(high-low)/2;
    if(arr[mid]==key)
    {
        //cout<<mid<<endl;
        return mid;
    }
    else if(arr[mid]<key)
        Bsearch(arr,mid+1,high,key);
    else
        Bsearch(arr,low,mid-1,key);
}
int main()
{
    long long n;
    cin>>n;
    long long arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long q;
    cin>>q;
    while(q--)
    {
        long long item,index,sum=0;
        cin>>item;
        index=Bsearch(arr,0,n-1,item);
        for(i=0;i<=index;i++)
        {
            sum+=arr[i];
        }
        cout<<index+1<<" "<<sum<<endl;
    }
}
