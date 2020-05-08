#include<bits/stdc++.h>
using namespace std;

void toSpiral(int arr[3][4],int m,int n)
{
    /*
    k->  starting row Index
    m->  end row Index

    l->   starting column index
    n->  end column Index
    */

    //store[] array to atore the couput value
    int store[m*n];
    int loc=0;//be first position in store array

    int i,k=0,l=0;
    int row_num=m,col_num=n;
    while(k<m && l<n)
    {
        //1 rows
        for(i=l;i<n;i++)
        {
            cout<<arr[k][i]<<" ";
            store[loc]=arr[k][i];
            loc++;
        }
        k++;

        //last column
        for(i=k;i<m;i++)
        {
            cout<<arr[i][n-1]<<" ";
            store[loc]=arr[i][n-1];
            loc++;
        }
        n--;

        //print last rows
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            {
                cout<<arr[m-1][i]<<" ";
                store[loc]=arr[m-1][i];
                loc++;
            }
            m--;
        }
        //print first columns
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                cout<<arr[i][l]<<" ";
                store[loc]=arr[i][l];
                loc++;
            }
            l++;
        }
    }

    for(int i=0;i<loc;i++)
    {
        cout<<store[i]<<" ";
    }
}
int main()
{
    int arr[4][4]={ {1,2, 3,  4},
                    {5,6, 7,  8},
                    {9,10,11, 12}};
    toSpiral( arr,3,4);
}
