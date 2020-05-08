#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll h[n];
        ll c[n],max=0,index_max=0;
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            if(h[i]>max)
            {
                max=h[i];
                index_max=i;
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        map<ll,ll> mp;
        ll curr_max=0;

        //take upto max starting take max end keep track

        for(i=n-1;i>=index_max;i--)
        {
            if(h[i]>curr_max)
            {
                curr_max=h[i];
                mp[c[i]]++;
            }
        }
        cout<<mp.size()<<endl;
        mp.clear();
    }
}
