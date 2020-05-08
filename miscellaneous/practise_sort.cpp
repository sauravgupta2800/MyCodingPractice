#include<bits/stdc++.h>
using namespace std;

void print_array_data(int array[],int n)
{
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    return;
}

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
    int arrow=l;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[arrow]);
            arrow++;
        }
    }
    quicksort(arr,l,arrow-2);
    quicksort(arr,arrow,r);
}
void insertionsort(int arr[],int n)
{
    int item;
    int check;
    for(int i=1;i<n;i++)
    {
        item=arr[i];
        check=i-1;
        while(check>=0 && arr[check]>item)
        {
            arr[check+1]=arr[check];
            check--;
        }
        arr[check+1]=item;
    }
}
int main()
{
    int arr[]={11,-1,200,10,7,8,9,1,5};
    int n=9;
    insertionsort(arr,n);
    print_array_data(arr,n);
}
