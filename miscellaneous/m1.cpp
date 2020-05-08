#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int r,int mid,int &c)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    int m=0,i=0,j=0;
    for(i=l;i<=mid;i++)
    {
        L[m++]=arr[i];
    }
    int n=0;
    for(i=mid+1;i<=r;i++)
    {
        R[n++]=arr[i];
    }
    i=j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k++]=L[i];
            i++;
        }
        else
        {
            c+=(n1-i);
            arr[k++]=R[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
    return ;
}
void mergesort(int arr[],int l,int r,int &c)
{
    if(r>l)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid,c);
        mergesort(arr,mid+1,r,c);
        merge(arr,l,r,mid,c);
    }
    return;
}
int main()
{
    int arr[]={3,1,6,4,7,0};
    int l=0,n=6;
    int c=0;
    mergesort(arr,l,n-1,c);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<c<<endl;
}
