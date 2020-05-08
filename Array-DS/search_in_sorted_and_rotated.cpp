#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int low,int high,int key)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]<key)
        return BinarySearch(arr,mid+1,high,key);
    else
        return BinarySearch(arr,low,mid-1,key);
}
/* Function to get pivot. For array 3, 4, 5, 6, 1, 2
   it returns 3 (index of 6) */
int findPivot(int arr[], int low, int high)
{
  // base cases
  if (high < low) return -1;
  if (high == low) return low;

   int mid = (low + high)/2; /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1])
    return mid;

   if (mid > low && arr[mid] < arr[mid - 1])
    return (mid-1);

   if (arr[low] >= arr[mid])
    return findPivot(arr, low, mid-1);

   return findPivot(arr, mid + 1, high);
}
int pivotBinarySearch(int arr[],int n,int key)
{
    int pivot=findPivot(arr,0,n-1);
    if(pivot==-1)
    {
        return BinarySearch(arr,0,n-1,key);
    }
    if(arr[0]>pivot)//2nd half
    {
         return BinarySearch(arr,pivot+1,n-1,key);
    }
    else
    {
        return BinarySearch(arr,0,pivot-1,key);
    }
}

int main()
{
    int arr[]={8,9,10,1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    cout<<"Index of element to be searched is: "<<pivotBinarySearch(arr,n,key);
    return 0;

}
