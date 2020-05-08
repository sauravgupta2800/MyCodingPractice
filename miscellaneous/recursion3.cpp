#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v,int i,int sum,int S)
{
    if(sum==S)
        return 1;
    else if(sum>S)
        return 0;
    if(i==v.size())
    {
        if(S==sum)
            return 1;
        else
            return 0;
    }
    return fun(v,i,sum+v[i],S)+fun(v,i+1,sum+v[i],S)+fun(v,i+1,sum,S);
}
int main()
{
    vector<int> v={1,1,2};
    cout<<fun(v,0,0,3);
}
