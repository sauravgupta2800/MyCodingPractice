#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        int neg=0,pos=0,large=0,small=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        if(pos==0 || neg==0)
            cout<<max(pos,neg)<<" "<<max(pos,neg)<<endl;
        else
            cout<<max(pos,neg)<<" "<<min(pos,neg)<<endl;
    }
}
