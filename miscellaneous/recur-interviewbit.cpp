#include<bits/stdc++.h>
using namespace std;
void unlimited_times(vector<int> v,int i,int curr_sum,int S,vector<int> &h,vector< vector<int> > &res)
{
    if(i==v.size())
    {
        if(curr_sum==S)
        {
            res.push_back(h);
        }
        return;
    }

     //leave i=i+1
    unlimited_times(v,i+1,curr_sum,S,h,res);
    // take
    h.push_back(v[i]);
    unlimited_times(v,i+1,curr_sum+v[i],S,h,res);
    h.pop_back();
}
int main()
{
    vector<int> v={8, 10, 6, 11, 1, 16, 8};
    vector<int> h;
    sort(v.begin(),v.end());
    vector< vector<int> > res;
    unlimited_times(v,0,0,28,h,res);

    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
