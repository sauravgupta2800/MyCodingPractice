#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> factors(ll x)
{
    vector <ll> result;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(x/i==i)
            {
                result.push_back(i);
            }
            else
            {
                result.push_back(i);
                result.push_back(x/i);
            }
        }
    }
    sort(result.begin(),result.end());
    return result;
}

ll output(ll n)
{
    vector<ll> f=factors(n);
    ll max=0;
    for(ll i=0;i<f.size();i++)
    {
        for(ll j=i;j<f.size();j++)
        {
            for(ll k=j;k<f.size();k++)
            {
                for(ll l=k;l<f.size();l++)
                {
                    if(n==(f[i]+f[j]+f[k]+f[l]))
                    {
                        ll prod = f[i]*f[j]*f[k]*f[l];
                        if(prod>max)
                        {
                            max=prod;
                        }
                    }
                }
            }
        }
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll f=output(n);
        if(f>=1)
        {
            cout<<f<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
    }
}
