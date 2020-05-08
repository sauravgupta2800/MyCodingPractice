#include<bits/stdc++.h>
using namespace std;

void cyclically_rotate(int arr[],int n)
{
    int i,last_element=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=last_element;
}
int main()
{
    int arr[]={1,2,3,4,5};
    cyclically_rotate(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
