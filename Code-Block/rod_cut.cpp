#include<bits/stdc++.h>
using namespace std;
int fun(int curr_len,vector<int> rod)
{
    if(cur_len<0)
        return 0;
    int ans=INT_MIN;
    for(int i=0;i<curr_len;i++)
    {
        ans=max(rod[i]+fun(curr_len-i-1));
    }
    return ans;
}
int main()
{
    vector<int> v={1,5,8,9,10};
    cout<<fun(5,v);
}
