#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low,int high)
{
    if(arr[low]<arr[high])
        return arr[0];//no rotation
    if(low==high)
        return arr[low];
    int mid=(low+high)/2;
    if(mid<high && arr[mid]>arr[mid+1])
        return arr[mid+1];
    if(low<mid && arr[mid]<arr[mid-1])
        return arr[mid];
    if(arr[high]>arr[mid])
        return findPivot(arr,low,mid-1);
    else
        return findPivot(arr,mid+1,high);
}
int main()
{
    int arr1[] =  {5, 6, 1, 2, 3, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    printf("The minimum element is %d\n", findPivot(arr1, 0, n1-1));
}
