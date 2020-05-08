#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
void quicksort(int arr[],int l,int r)
{
    if(l>=r)
        return;
    int pivot=arr[r];
    int cnt=l;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[cnt]);
            cnt++;
        }
    }
    quicksort(arr,l,cnt-2);
    quicksort(arr,cnt,r);
}
int main()
{
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
