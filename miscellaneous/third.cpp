#include<bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--)
    {
        cin.tie(NULL);
        ll i,j,unique_key;
        ll n;
        cin>>n;
        ll arr[n+1];
        bool res=false;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        multimap<ll,ll> map;
        for(i=1;i<=n;i++)
        {
            map.insert(make_pair(arr[arr[i-1]-1],i));
        }

        for(multimap<ll,ll>::iterator it = map.begin(), end = map.end(); it != end; it = map.upper_bound(it->first))
        {
             unique_key=it->first;
             if(map.count(unique_key)>1)
             {
                 vector<ll> v;
                 ll key = unique_key;
                 auto itr1 = map.lower_bound(key);
                 auto itr2 = map.upper_bound(key);
                 while (itr1 != itr2)
                 {
                     if (itr1 -> first == key)
                     {
                         //cout<<itr1->second<<endl;
                         v.push_back(itr1->second);
                     }
                     itr1++;
                 }

                 n=v.size();
                 for(i=0;i<n;i++)
                 {
                     for(j=i+1;j<n;j++)
                     {
                         if(arr[v[i]-1]!=arr[v[j]-1])
                         {
                             res=true;
                             break;
                         }
                         else
                         {
                             continue;
                         }
                     }
                 }

             }
             else
             {
                 //result=false;
             }
        }
        if(res)
            cout<<"Truly Happy\n";
        else
            cout<<"Poor Chef\n";
    }
    return 0;
}
