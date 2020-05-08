#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll b1[]={1,1,1,1,-1,-1,-1,-1};
        ll b2[]={1,1,-1,-1,1,1,-1,-1};
        ll b3[]={1,-1,1,-1,1,-1,1,-1};

        ll x,y,z,i;
        cin>>x>>y>>z;
        bool found=false;
        for(i=0;i<8;i++)
        {
            if (( (x*b1[i]) + (y*b2[i]) + (z*b3[i]) )==0)
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }

}
