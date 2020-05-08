#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f_sum=0,f_sq=0,sum,sq,i,d_sum=0,d_sq=0,a,b;
    int arr[]={3,1,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    f_sum=n*(n+1)/2;
    f_sq=n*(n+1)*((2*n)+1)/6;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        sq+=arr[i]*arr[i];
    }
    if(sum>f_sum)
    {
        d_sum=sum-f_sum;
        d_sq=sq-f_sq;
        b=((d_sq)-((d_sum)*(d_sum)))/(2*d_sum);
        a=d_sum+b;
        cout<<"repeat: "<<a<<" missing: "<<b<<endl;
    }
    else
    {
        d_sum=f_sum-sum;
        d_sq=f_sq-sq;
        b=((d_sq)-((d_sum)*(d_sum)))/(2*d_sum);
        a=d_sum+b;
        cout<<"repeat: "<<b<<" missing: "<<a<<endl;
    }

}
