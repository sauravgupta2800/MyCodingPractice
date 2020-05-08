#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int partition(int arr[] , int first, int last)
{
    int pivot=arr[first];
    int i=first+1;
    int j;
    for(j=first+1;j<=last;j++)
    {
        if(pivot>=arr[j])
        {
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[first],&arr[i-1]);
    return i-1;
}

void Quicksort(int arr[],int low,int high)
{
    int p;
    if(low<high)
    {
        p = partition(arr,low,high);
        Quicksort(arr,low,p-1);
        Quicksort(arr,p+1,high);
    }
}

bool has_sum_pair(int arr[],int n,int sum)
{
    int l,r;
    //sort the list
    Quicksort(arr,0,n-1);
    l=0;
    r=n-1;
    while (l<r) {
        /* code */
        if(arr[l]+arr[r]==sum)
            return true;
        else if (arr[l]+arr[r]<sum)
            l++;
        else
            r--;
    }
    return false;
}
int main()
{
    int arr[]={5,4,3,2,1,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<has_sum_pair(arr,n,4);
}
