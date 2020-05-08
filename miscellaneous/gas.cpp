#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7;
    int arr[n]={2,3,4,4,3,2,1};
    int candy[n]={1};
    for(int i=0;i<n;i++)
    {
        candy[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            candy[i]=candy[i-1]+1;
    }

    for(int i=n-1;i>0;i--)
    {
        if(arr[i-1]>arr[i] && candy[i-1]<=candy[i])
            candy[i-1]=candy[i]+1;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=candy[i];
    }
    cout<<sum;
}
