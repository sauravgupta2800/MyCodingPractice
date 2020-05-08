#include<bits/stdc++.h>
using namespace std;

int left(int i)
{
    return i*2+1;
}
int right(int i)
{
    return 2*i+2;
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
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
int main()
{
    //int arr[]={1,3,2,4,6,7,9,10,13};
    int arr[]={3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    int res[k];
    for(int i=0;i<k;i++)
    {
        res[i]=arr[i];
    }
    buildheap(res,k);
    for(int i=0;i<k-1;i++)
        cout<<-1<<" ";
    for(int i=k-1;i<n;i++)
    {
        if(i==k-1)
            cout<<res[0]<<" ";
        else
        {
            if(arr[i]>res[0])
            {
                res[0]=arr[i];
                heapify(res,k,0);
            }
            cout<<res[0]<<" ";
        }
    }
}
