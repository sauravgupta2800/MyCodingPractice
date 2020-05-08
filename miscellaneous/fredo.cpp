#include<bits/stdc++.h>
using namespace std;
#define long long ll

int main()
{
    ll n,i;
    cin>>n;
    ll arr[n],m=INT_MIN,PROD=1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        PROD*=arr[i];
        m=max(m,arr[i]);
    }
    ll low=1,high=m,mid,curr_val=1;
    while(low<high)
    {
        //cout<<low<<" "<<high<<endl;
        mid=(low+high)/2;
        curr_val=1;
        for(i=0;i<n;i++)
        {
            curr_val*=mid;
        }
        //cout<<"val: "<<curr_val<<endl;
        if(curr_val>PROD)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<low<<endl;
}
