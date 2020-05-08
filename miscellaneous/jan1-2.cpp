#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll bob=0,alice=0,common=0,i=0,n,b,a,item;
        vector<ll> v;
        cin>>n>>b>>a;
        for(i=0;i<n;i++)
        {
            cin>>item;
            v.push_back(item);
            if(v[i]%a==0 && v[i]%b==0)
                common++;
            else if(v[i]%b==0)
                bob++;
            else if(v[i]%a==0)
                alice++;
        }

        if(common>0)//ODDD
        {
            //alice ki turn hai!!!!
            if(bob>=alice)//0 , 1
            {
                cout<<"BOB\n";
            }
            else
            {
                cout<<"ALICE\n";
            }

        }
        else//EVEN COMMON
        {
            //bob ki turn hai.!!!!!
            if(bob>alice)
                cout<<"BOB\n";
            else
                cout<<"ALICE\n";
        }

    }
}
