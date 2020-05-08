#include<bits/stdc++.h>
using namespace std;
int total=10000;

void fun(int i,vector<int> coin,int curr_sum,int sum,int step)
{
    if(curr_sum>=sum)
    {
        total=min(total,step);
        return;
    }
    if(i==coin.size())
        return;
    fun(i,coin,curr_sum+coin[i],sum,step+1);
    fun(i+1,coin,curr_sum,sum,step);
}
int main()
{
    vector<int> v={1,3,4};
    fun(0,v,0,12,0);
    cout<<total;
}
