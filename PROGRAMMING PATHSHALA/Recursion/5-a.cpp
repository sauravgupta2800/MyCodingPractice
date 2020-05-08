// count the subsets to sum=4
#include<bits/stdc++.h>
using namespace std;
int fun(int i,vector<int> v,int curr_sum,int sum)
{
    if(curr_sum==sum)
        return 1;
    if(curr_sum>sum)
        return 0;
    if(i==v.size())
        return 0;
    int x=fun(i,v,curr_sum+v[i],sum);
    int y=fun(i+1,v,curr_sum,sum);
    return x+y;
}
int main()
{
    vector<int> v={1,2};
    cout<<fun(0,v,0,3);
}
