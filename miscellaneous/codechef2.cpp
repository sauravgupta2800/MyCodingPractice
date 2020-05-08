#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll arr[],ll n,double k)
{
    ll i=0;
    ll sum_div=0;
    for(i=0;i<n;i++)
    {
        sum_div+=ceil(arr[i]/k);
    }

    return sum_div;
}

ll Bsearch(ll arr[],ll low,ll high,ll n,ll H)
{
    if(low<high)
    {
        ll mid=(low+high)/2;

        ll curr_k=fun(arr,n,mid);

        if(curr_k<=H)
            return Bsearch(arr,low,mid,n,H);
        else if(curr_k>H)
            return Bsearch(arr,mid+1,high,n,H);
    }
    else if(low==high)
        return high;
}
main()
{
    ll t=0;
    cin>>t;
    while(t--)
    {
        ll n=0,H=0,i,m=0,sum=0,avg=0;
        cin>>n>>H;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m=max(m,arr[i]);
            sum+=arr[i];
        }
        avg=ceil(sum/float(H));
        cout<<Bsearch(arr,avg,m,n,H)<<endl;
    }
}
