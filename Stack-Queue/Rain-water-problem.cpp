#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l[n],r[n],i,sum=0;
    int m1=arr[0];
    l[0]=m1;
    int m2=arr[n-1];
    r[n-1]=m2;
    for(i=1;i<n;i++)
    {
        if(m1<arr[i])
        {
            m1=arr[i];
        }
        l[i]=m1;
    }

    for(i=n-1;i>=0;i--)
    {
        if(m2<arr[i])
        {
            m2=arr[i];
        }
        r[i]=m2;
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        //cout<<l[i]<<" "<<r[i]<<endl;
        sum+=min(l[i],r[i])-arr[i];
    }
    cout<<sum<<endl;
}
