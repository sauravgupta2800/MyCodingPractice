#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
 int pivot = arr[high];    // pivot
 int i = (low - 1);  // Index of smaller element

 for (int j = low; j <= high- 1; j++)
 {
     if (arr[j] <= pivot)
     {
         i++;
         swap(&arr[i], &arr[j]);
     }
 }
 swap(&arr[i + 1], &arr[high]);
 return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
 if (low < high)
 {
     int pi = partition(arr, low, high);
     quickSort(arr, low, pi - 1);
     quickSort(arr, pi + 1, high);
 }
}
//---------------------------------------------------//

int main()
{
    int n=5,C=3,i;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    int low=0,high=9-1,mid;

    while(low+1<high)
    {

        mid=(low+high)/2;
        int count_cow=1;
        int base=arr[0];
        for(i=1;i<n;i++)
        {
            if((arr[i]-base)>=mid)
            {
                count_cow++;
                base=arr[i];
            }
        }
        if(count_cow==C)
            low=mid;
        else
            high=mid;

    }
    cout<<mid;
}
