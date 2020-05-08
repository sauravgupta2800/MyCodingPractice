#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a;//ll a[n];
        ll mini=1000000002;
        ll maxi=-1;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            maxi=max(maxi,a);
            mini=min(mini,a);
        }
        cout<<max(maxi,n*mini)<<endl;

    }
}
