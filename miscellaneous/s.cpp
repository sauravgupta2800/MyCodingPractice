#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n1,n2,m;
        cin>>n1>>n2>>m;
        ll sum=m*(m+1)/2;
        if(n1>=sum && n2>=sum)
            cout<<(n1+n2)-2*sum<<endl;
        else
        {
            if(n1<=n2)
                cout<<n2-n1<<endl;
            else
                cout<<n1-n2<<endl;
        }
    }
}
