#include<bits/stdc++.h>
using namespace std;
int fun(int i,int arr[], int sum,int N)
{
    if(sum==0)
        return 1;
    if(i==N)
    {
        if(sum==0)
            return 1;
        return 0;
    }
    if(arr[i]>sum)
    {
        return fun(i+1,arr,sum,N);
    }
    return fun(i+1,arr,sum-arr[i],N)||fun(i+1,arr,sum,N);
}
int main()
{
    int arr[]={1,2,3,4};
    cout<<fun(0,arr,5,4);
}
