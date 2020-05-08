#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isprime(ll n)
{
    ll i;
    bool yes=false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            yes=true;
            break;
        }
    }
    if(yes==false)
        return true;
    else
        return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i;
        cin>>a>>b;
        if(a<2)
            a=2;
        for(i=a;i<=b;i++)
        {
            if(isprime(i))
                cout<<i<<"\n";
        }
    }
}
