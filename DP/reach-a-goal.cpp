#include<bits/stdc++.h>
using namespace std;
//int dp[100000];

int fun(int i,int curr_sum,int target,vector<int> v)
{
    if(curr_sum==target)
    {
        cout<<"curr_sum: "<<curr_sum<<endl;
        return 1;
    }
    if(curr_sum>target)
    {
        return 0;
    }
    if(i==v.size())
        return 0;
    /*if(dp[curr_sum]>0)
        return dp[curr_sum];*/
    //take
    int x=fun(i,curr_sum+v[i],target,v);
    //leave
    int y=fun(i+1,curr_sum,target,v);

    return x+y;
    /*dp[curr_sum]= x+y;
    return dp[curr_sum];*/
}
int main()
{
    vector<int> v={3,5,10};
    memset(dp,-1,sizeof(dp));
    cout<<fun(0,0,20,v);
}
