#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        cin.tie(NULL);
        ll x,y,k,n,i;
        //x=3;y=1;k=2;n=2;
        cin>>x>>y>>k>>n;
        ll left=x-y;
        ll p[n],c[n];
        bool result=false;
        for(i=0;i<n;i++)
        {
            cin>>p[i]>>c[i];
            if(c[i]<=k)
            {
                if(p[i]>=left)
                {
                    result=true;
                }
            }
        }
        cout<<(result?"LuckyChef\n":"UnluckyChef\n");

    }
}
