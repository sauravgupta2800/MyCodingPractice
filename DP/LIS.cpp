#include<bits/stdc++.h>
using namespace std;
int LIS(int* a,int n)
{
    int *lis,i,j,max=0;
    lis = (int*)malloc(sizeof(int)*n);

    /*initilize LIS values for all indexes */
    for(i=0;i<n;i++)
    {
        lis[i]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i] && lis[j]+1 > lis[i])
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    max=0;
    for(i=0;i<n;i++)
    {
        if(max<lis[i])
        {
            max=lis[i];
        }
    }
    free(lis);

    return max;
}

int main()
{
    int arr[]={2,7,4,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr,n)<<endl;
    return 0;
}
