#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
        sum+=arr[i];
    }
    cout<<"min value is: "<<sum-max<<endl;
    cout<<"max value is: "<<sum-min;
}
