#include<bits/stdc++.h>
using namespace std;

int left(int i)
{
    return i*2;
}
int right(int i)
{
    return 2*i+1;
}
int parent(int i)
{
    return i/2;
}
void heapify(int arr[],int n,int i)//pass n only not n-1
{
    int l=left(i);
    int r=right(i);
    int largest=0;
    if(l<n && arr[l]<=arr[i])
        largest=l;
    else
        largest=i;
    if(r<n && arr[largest]>arr[r])
        largest=r;
    if(i!=largest)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void buildheap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
int main()
{
    int arr[]={0,4,1,3,2,16,9,10,14,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    buildheap(arr,n);
    for(int i=1;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
