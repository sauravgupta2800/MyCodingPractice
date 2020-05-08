#include<bits/stdc++.h>
using namespace std;
int Bsearch(long long arr[],long long low,long long high,long long key)
{
    if(key<arr[low])
        return low;
    if(key>arr[high])
        return high+1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
        Bsearch(arr,mid+1,high,key);
    else
        Bsearch(arr,low,mid-1,key);
}
int main()
{
    long long n,i,item,curr_sum=0,q,val;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>item;
        curr_sum+=item;
        arr[i]=curr_sum;
    }
    cin>>q;
    while(q--)
    {
        cin>>val;
        cout<<Bsearch(arr,0,n-1,val)+1<<endl;
    }
}
