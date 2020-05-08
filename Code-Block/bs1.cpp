#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Bsearch(ll N)
{
    if(N==1 || N==0)
        return N;
    ll lo=0;
    ll hi=N/2;
    while(lo<=hi)
    {
        ll m=lo+(hi-lo)/2;
        if(m*m>N)
        {
            hi=m-1;
        }
        else
            lo=m+1;

    }
    return hi;
}
int main()
{

    cout<<Bsearch(1);
}
