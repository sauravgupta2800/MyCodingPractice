#include<bits/stdc++.h>
//#include <boost/functional/hash.hpp>

using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    vector<int> x={6, -7, 5, 9, -9, -7};
    vector<int> y={7, 5, 5, 9, -8, 2};
    int n=x.size();
    int OLP=0;
    int VP=0;
    int curr_max=0;
    unordered_map< pair<int,int>,int > hash;
    int max1=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        OLP=0;
        VP=0;
        curr_max=0;
        max1=0;
        for(int j=0;j<n;j++)
        {
            // (i,j)=x[i],y[j]
            if(i==j)
                continue;
            if(x[i]==x[j])
            {
                VP++;
                //cout<<"VP\n";
            }
            else if( (x[i]==x[j]) && (y[i]==y[j]) )
            {
                OLP++;
                //cout<<"OLP\n";
            }
            else
            {
                int yd=y[j]-y[i];
                int xd=x[j]-x[i];
                int g=__gcd(yd,xd);
                yd/=g;
                xd/=g;
                hash[{yd,xd}]++;
                curr_max=max(curr_max,hash[{yd,xd}]);
            }
        }
        hash.clear();
        max1=max(curr_max+1+OLP,OLP+1+VP);
        ans=max(ans,max1);
    }
    cout<<ans;
}
