#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int tmp=arr[start];
        arr[start]=arr[end];
        arr[end]=tmp;
        start++;
        end--;
    }
}

void left_rotate(int arr[], int d ,int n)
{
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    left_rotate(arr,2,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
