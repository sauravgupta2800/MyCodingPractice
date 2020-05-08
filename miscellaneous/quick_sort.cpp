#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int partition(int arr[],int first,int last)
{
    int pivot=arr[last];
    int i=first-1,j;
    for(j=first;j<last;j++)
    {
        if(arr[j]<pivot)
        {
            swap(arr[i+1],arr[j]);
            {
                i++;
            }
        }
    }
    swap(arr[i],pivot);
    return i+1;
}
void quicksort(int arr[],int s,int e)
{
    if(s<e)
    {
        int pivot=partition(arr,s,e);
        quicksort(arr,s,pivot-1);
        quicksort(arr,pivot+1,e);
    }
}
int main()
{
    int arr[]={1,4,8,2,5};
    quicksort(arr,0,4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

}
