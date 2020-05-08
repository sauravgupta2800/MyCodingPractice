#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod=10000003;

ll fun(vector<ll> v,ll time)
{
    ll c=1;
    ll total=0;
    for(ll i=0;i<v.size();i++)
    {
        total=(total%mod+v[i]%mod)%mod;
        if(total>time)
        {
            total=v[i];
            c++;
        }
    }
    return c;
}

int painter_partition(vector<ll> v,ll k)
{
    ll beg=0,end=0;
    for(ll i=0;i<v.size();i++)
    {
        beg=max(beg,v[i]);
        end=(end%mod+v[i]%mod)%mod;
    }
    while(beg<=end)
    {
        ll mid=(beg+end)/2;
        ll sofar=fun(v,mid);
        if(sofar>k)
            beg=mid+1;
        else
            end=mid-1;
    }
    return beg;
}
int main()
{
    vector<ll> v={5,8,10,12};
    cout<<painter_partition(v,2);
}
