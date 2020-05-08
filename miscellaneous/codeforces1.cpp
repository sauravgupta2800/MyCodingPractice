#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
            //break;
        }
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>1+b || a==b)
            cout<<"NO"<<endl;
        else
        {
            bool res=isprime(a+b);
            if(res)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
