#include<bits/stdc++.h>
using namespace std;
int unlimited_times(vector<int> v,int i,int curr_sum,int S)
{
     if(curr_sum==S)
        return 1;
    else if(curr_sum>S)
        return 0;
    if(i==v.size())
        return 0;
    // take i=i                      //leave i=i+1
    return unlimited_times(v,i,curr_sum+v[i],S)+unlimited_times(v,i+1,curr_sum,S);
}
int main()
{
    vector<int> v={2,3,6,7};
    cout<<unlimited_times(v,0,0,7);
}
