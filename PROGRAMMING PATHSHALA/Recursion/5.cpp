// minimum abolute difference b/w 2 sets
#include<bits/stdc++.h>
using namespace std;

int fun(int i,vector<int> v,int s1,int s2)
{
    if(i==v.size())
    {
        return abs(s1-s2);
    }
    int x=fun(i+1,v,s1+v[i],s2);
    int y=fun(i+1,v,s1,s2+v[i]);
    return min(x,y);
}
int main()
{
    vector<int> v={1,5,6,10};
    cout<<fun(0,v,0,0);
}
