#include<bits/stdc++.h>
using namespace std;

long long fun(long long arr[],long long n,long long mid_time)
{
    long long sum=0,count=0,i;
    for(i=0;i<n-1;i++)
    {
        sum+=arr[i];
        if(sum==mid_time)
        {
            count++;
            sum=0;
        }
        else if((sum+arr[i+1])>mid_time)
        {
            count++;
            sum=0;
        }
    }
    if((sum+arr[n-1])>0)
    {
        count++;
    }

    return count;
    //cout<<count<<endl;
    /*if(count>minimum_day)
        return true;
    else
        return false*/
}
int main()
{
    long long n,m,low=0,high=0,mid=0,curr_day=0,i;
    cin>>n>>m;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        low=max(low,arr[i]);
        high+=arr[i];
    }
    //cout<<low<<" "<<high<<endl;

    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(low==high)
            break;
        curr_day = fun(arr,n,mid);
        if(curr_day<=m)
            high=mid;
        else
            low=mid+1;
    }
    cout<<mid<<endl;
}
