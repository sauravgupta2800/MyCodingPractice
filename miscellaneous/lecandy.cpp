#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--) {
        ll n,c,i,sum=0;
        cin>>n>>c;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<=c)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
