#include<bits/stdc++.h>
using namespace std;


void find_max_sum(int arr[],int n)
{
    int arrSum = 0;  // Stores sum of arr[i]
    int currVal = 0;  // Stores sum of i*arr[i]
    for (int i=0; i<n; i++)
    {
        arrSum = arrSum + arr[i];
        currVal = currVal+(i*arr[i]);
    }

    // Initialize result as 0 rotation sum
    int maxVal = currVal;

    // Try all rotations one by one and find
    // the maximum rotation sum.
    for (int j=1; j<n; j++)
    {
        currVal = currVal + arrSum-n*arr[n-j];
        cout<<currVal<<endl;
        if (currVal > maxVal)
            maxVal = currVal;
    }

    // Return result
    cout<<maxVal;
}
int main()
{
    int arr[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_max_sum(arr,n);
}
