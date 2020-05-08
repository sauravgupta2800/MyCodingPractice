#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans=(((((n%mod*n%mod)%mod)%mod+n%mod)%mod)/2)%mod;
        cout<<ans<<endl;
    }
}
