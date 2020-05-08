#include<bits/stdc++.h>

#include <utility>
using namespace std;
int main()
{
    vector<int> x={-1,0,1,2,3,3};
    vector<int> y={1,0,1,2,3,4};
    int n=x.size();
    int OLP=0;
    int VP=0;
    int curr_max=0;
    map< pair<int,int>,int > hash;
    int max1=0;
    int ans=0;
    int same=0;
    for(int i=0;i<n;i++)
    {
        same=1;
        curr_max=0;
        for(int j=i+1;j<n;j++)
        {
                int yd=y[j]-y[i];
                int xd=x[j]-x[i];
                if(yd==0 && xd==0)
                {
                    same++;
                    continue;
                }
                if(xd<0)
                {
                    yd=-1*yd;
                    xd=-1*xd;
                }
                int g=__gcd(yd,xd);
                if(g>0)
                {
                    yd/=g;
                    xd/=g;
                }
                hash[{yd,xd}]++;
                curr_max=max(curr_max,hash[{yd,xd}]);
        }
        curr_max+=same;
        hash.clear();
        ans=max(ans,curr_max);
    }
    cout<<ans;
}
