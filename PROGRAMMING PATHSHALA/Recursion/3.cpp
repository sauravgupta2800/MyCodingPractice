#include<bits/stdc++.h>
using namespace std;
void fun(int i,vector<int> v,vector<int> ans)
{
    if(i==v.size())
    {
        for(int k=0;k<ans.size();k++)
        {
            cout<<ans[k]<<" ";
        }
        cout<<endl;
        return;
    }
    //leave
    fun(i+1,v,ans);
    //take
    ans.push_back(v[i]);
    fun(i+1,v,ans);
}
int main()
{
    vector<int> v={1,2,3},ans;
    fun(0,v,ans);
}
