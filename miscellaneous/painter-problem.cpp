#include <bits/stdc++.h>
using namespace std;
#define ll int
ll painter_num(ll arr[],ll n,ll time)
{
    ll i,count=0,sum=0,curr_val=0;
    for(i=0;i<n-1;i++)
    {
        sum+=arr[i];
        if(sum==time)
        {
            count++;
            sum=0;
        }
        else if((sum+arr[i+1])>time)
        {
            count++;
            sum=0;
        }
    }
    if((sum+arr[n-1])<=time)
    {
        count++;
    }
    return count;
}

ll Bsearch(ll arr[],ll n,ll low,ll high,ll P)
{
    if(low<high)
    {
        ll mid=low+(high-low)/2;
        //cout<<"mid: "<<mid<<endl;
        ll curr_p=painter_num(arr,n,mid);
        //cout<<"returnes p:"<<curr_p<<endl;
        if(curr_p<=P)
            Bsearch(arr,n,low,mid,P);
        else if(curr_p>P)
            Bsearch(arr,n,mid+1,high,P);
    }
    else// if(low==high)
        return low%10000003;
}
int main()
{
    ll arr[]={1,11};
    ll A=2,B=5;
    ll n=sizeof(arr)/sizeof(arr[0]);
    ll brr[n],m=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        brr[i]=arr[i]*B;
        m=max(m,brr[i]);
        sum+=brr[i];
    }
    cout << Bsearch(brr,n,m,sum,A);
}
