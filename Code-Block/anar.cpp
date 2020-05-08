#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod=1000000007;
int main()
{
    ll n,q;
    cin>>n>>q;

    n=n+1;
    ll Nodes=pow(2,n)-1;
    ll edges=Nodes-1;
    ll leave=(Nodes+1)/2;
    ll top=1;
    while(q--)
    {
        ll y;
        ll x;
        cin>>y;
        if(y==1)
        {
            cin>>x;
            if(x==1 || x==2)
            {
                // Right and left
                edges=(n+(2*edges))%mod;
                leave=(2*leave);
                top=2*top;
            }
            else if(x==3)
            {
                //top
                n=n*2;
                edges=(top+(2*edges))%mod;
                top=leave;
            }
            else if(x==4)
            {
                //bottom
                n=2*n;
                edges=(leave+(2*edges))%mod;
                leave=top;
            }
        }
        else
        {
             cout<<edges<<endl;
        }
    }
}
