#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
     cin>>t;
    while(t--)
    {
        long long A,D;
        cin>>A>>D;
        //A=500;D=200;
        ll m,n,p;
        cin>>m>>n>>p;
        //m=2;n=4;p=5;
        bool result=false;
            long long d;
            long long both_way;
            d=abs(m)+abs(n);
            both_way=2*d*p;
            //cout<<(2*d*p)+D<<" "<<both_way;
            if(both_way<=(A-D))
            {
                cout<<"Possible\n";
            }
            else
            {
                cout<<"Impossible\n";
            }
    }
    return 0;

}
