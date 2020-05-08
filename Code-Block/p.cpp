#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    ll tn,kn,g;
    cin>>tn>>kn>>g;
    vector<ll> time;
    for(ll i=0;i<tn;i++)
    {
        ll x; cin>>x; time.push_back(x);
    }
    vector<ll> k;
    for(ll i=0;i<kn;i++)
    {
        ll x; cin>>x; k.push_back(x);
    }
    sort(k.begin(),k.end());
    ll taken[kn];
    memset(taken,0,sizeof(taken));
    ll times=0;
    for(int i=0;i<tn-1;i++)
    {
        ll interval=time[i+1]-time[i];
        //cout<<"interval: "<<interval<<endl;
        if(g>0)
        {
            for(ll l=0;l<kn;l++)
            {
                if(k[l]<=interval && taken[l]==0)
                {
                    times++;
                    taken[l]=1;
                }
            }
            g--;
        }
    }
    cout<<times<<endl;

}
