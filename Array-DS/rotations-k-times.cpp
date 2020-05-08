#include<bits/stdc++.h>
using namespace std;

// Function to left rotate an array k times
void leftRotate(int arr[], int n, int k)
{
    // Print array after k rotations
    for (int i = k; i < k + n; i++)
        cout << arr[i%n] << " ";
}

// Driver program
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 2;
    leftRotate(arr, n, k);
    cout << endl;

    k = 3;
    leftRotate(arr, n, k);
    cout << endl;

    k = 4;
    leftRotate(arr, n, k);
    cout << endl;

    return 0;
} 
