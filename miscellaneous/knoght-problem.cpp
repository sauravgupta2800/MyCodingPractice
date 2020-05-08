#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        ll dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

        //ll res[6]={0};
        vector< pair<ll,ll> > v;
        ll n,a,b,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        ll X,Y;
        cin>>X>>Y;
        bool check=false,made=false;
        for(i=0;i<n;i++)
        {
            for(ll j=0;j<8;j++)
            {
                if(X==(v[i].first+dx[j]) && Y==(v[i].second+dy[j]))
                {
                    check=true;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(ll j=0;j<8;j++)
            {
                if( check &&(1==abs(X-(v[i].first+dx[j])) && 1==abs(Y-(v[i].second+dy[j]))) )
                {
                    made=true;
                    break;
                }
            }
        }
        if(check && made)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
