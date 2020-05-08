#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    //
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i;
        cin.tie(0);
        cin>>a>>b;
        ll count=0;
        ll n=gcd(a,b);
        //std::cout << gcd(12,24) << '\n';
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                    count++;
                    //cout<<i<<endl;
                }
                else
                {
                    count+=2;
                    //cout<<i<<endl;
                    //cout<<n/i<<endl;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
