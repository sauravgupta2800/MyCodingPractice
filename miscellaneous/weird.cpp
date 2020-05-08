#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,a,b,a_freq,b_freq,count=0;
        cin>>n;
        ll arr[n];
        map< pair<int,int>,int > pair;
        map< int,int> freq;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }

        for(i=1;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                //cout<<arr[i]<<arr[j]<<endl;
                //pair[{arr[i],arr[j]}]++;
                pair[{i,j}]++;
            }
        }
        //cout<<endl;
        for(auto p=pair.begin();p!=pair.end();p++)
        {
            a=p->first.first;
            b=p->first.second;
            a_freq=0;
            b_freq=0;
            //cout<<a<<" "<<b<<endl;
            for(auto l=freq.begin();l!=freq.end();l++)
            {
                if(l->first==a)
                {
                    a_freq=l->second;
                }
                if(l->first==b)
                {
                    b_freq=l->second;
                }

                if(a_freq>=b && b_freq>=a)
                {
                    count++;
                    //cout<<a<<"---"<<b<<endl;
                }

            }
        }
        cout<<count;    
    }
}
