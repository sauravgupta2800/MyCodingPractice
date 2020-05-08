#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,in1,in2,n;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //ll arr[]={3,2,1,1,4};
        bool res=false;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]!=arr[j])
                {
                    if(arr[arr[i]-1]==arr[arr[j]-1])
                    {
                        res=true;
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        if(res)
            cout<<"Truly Happy\n";
        else
            cout<<"Poor Chef\n";
    }
    return 0;
}
