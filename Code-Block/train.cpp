#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> a,vector<int> d)
{
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    int i=1,j=0,plat=1,res=1;
    while(i<a.size() && j<d.size())
    {
        if(a[i]<=d[j])
        {
            i++;
            plat++;
            res=max(res,plat);
        }
        else
        {
            j++;
            plat--;
        }
    }
    return res;

}
int main()
{
    vector<int> a={900,940,950,1100,1500,1800};
    vector<int> b={910,1200,1120,1130,1900,2000};
    cout<<fun(a,b);
}
