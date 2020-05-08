#include<bits/stdc++.h>
using namespace std;
bool fun(long long arr[],long long n,long long mid,long long C)
{
    long long count_cow=1,base=arr[0];
    for(long long int i=1;i<n;i++)
    {
        if((arr[i]-base)>=mid)
        {
            count_cow++;
            base=arr[i];
        }
        if(count_cow==C)
            return true;
    }
    return false;
}
int main()
{
    int64_t t;
    cin>>t;
    while(t--)
    {
        long long n,C,i;
        cin>>n>>C;
        long long arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long low=0,high=arr[n-1]-arr[0],mid;

        //while loop
        while(high-low>1)
        {
            mid=low+(high-low)/2;
            if(fun(arr,n,mid,C))
                low=mid;
            else
                high=mid;
        }
        cout<<low<<endl;
    }
    return 0;
}
