#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;//="ppppmmnnoooopp";
        cin>>str;
        map<char,ll> um;
        for(ll i=0;i<str.size();i++)
        {
            um[str[i]]++;
        }
        vector<ll> v;
        for(auto i=um.begin();i!=um.end();i++)
        {
            v.push_back(i->second);
        }
        sort(v.begin(),v.end());
        if(v.size()>3 and v[3]!=v[2]+v[1])
            swap(v[1],v[0]);
        ll res=1;
            for(ll i=2;i<v.size();i++)
            {
                if(v[i]!=(v[i-1]+v[i-2]))
                {
                    res=0;
                    break;
                }
            }
            if(res)
            {
                cout<<"Dynamic"<<endl;
            }
            else
            {
                cout<<"Not"<<endl;
            }
    }
    return 0;
}
