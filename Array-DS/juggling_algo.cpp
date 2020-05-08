#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
    {
        return gcd(b,a%b);
    }
}

void rotate_array(int arr[],int d,int n)
{
    int i,j,k,tmp;
    for(i=0;i<gcd(d,n);i++)
    {
        tmp=arr[i];
        j=i;
        while(1)
        {
            k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=tmp;
        for(int l=0;l<n;l++)
        {
            cout<<arr[l]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate_array(arr,3,7);
    cout<<gcd(3,7);
}
