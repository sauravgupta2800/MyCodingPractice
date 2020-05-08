#include<bits/stdc++.h>
using namespace std;
int Bsearch(int arr[],int low,int high,int key)
{
    if(key<arr[low])
        return low;
    if(key>arr[high])
        return high+1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        cout<<mid<<endl;
        return mid;
    }
    else if(arr[mid]<key)
        Bsearch(arr,mid+1,high,key);
    else
        Bsearch(arr,low,mid-1,key);
}
int BinaryCol(int m[][100],int row_low,int row_high,int col,int key)
{
    if(key<m[row_low][col])
        return row_low;
    if(key>m[row_high][col])
        return row_high+1;
    int mid=(row_low+row_high)/2;
    if(m[mid][col]==key)
        return mid;
    else if(m[mid][col]<key)
        return BinaryCol(m,mid+1,row_high,col,key);
    else
        return BinaryCol(m,row_low,mid-1,col,key);
}
int BinaryRow(int m[][100],int col_low,int col_high,int row,int key)
{
    if(col_high>=col_low)
    {
        int mid=(col_low+col_high)/2;
        if(m[row][mid]==key)
            return mid;
        else if(m[row][mid]<key)
            return BinaryRow(m,mid+1,col_high,row,key);
        else
            return BinaryRow(m,col_low,mid-1,row,key);
    }
    return -1;
}
int main()
{
    int arr[4]={1,3,5,6};
    //cout<<Bsearch(arr,0,4,0);
    int m[4][100]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<BinaryCol(m,0,3,3,10);

    // must check return value if greater than the column
    // value then element is not prresent
    // no need to perform row Binary search OK
    cout<<BinaryRow(m,0,3,2,111);
}
