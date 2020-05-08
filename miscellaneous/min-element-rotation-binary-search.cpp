#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1,mid,min_element;
    while(low<=high)
    {
        mid=(low+high)/2;
        // this condition terminates when it is sorted
        if(arr[0]<=arr[n-1])
            min_element=arr[0];
        if(high>mid && arr[mid]>arr[mid+1])
        {
            min_element=arr[mid+1];
            break;
        }
        if(low<mid && arr[mid-1]>arr[mid])
        {
            min_element=arr[mid];
            break;
        }
        else if(arr[0]<arr[mid] && arr[mid]>arr[n-1])
            low=mid+1;
        else
            high=mid-1;
    }
    cout<<"min element is: "<<min_element<<endl;
    return 0;
}
