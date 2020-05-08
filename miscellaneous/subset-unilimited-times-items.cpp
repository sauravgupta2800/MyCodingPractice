#include<bits/stdc++.h>
using namespace std;
void unlimited_times(vector<int> v,int i,int curr_sum,int S,vector<int> &h,vector< vector<int> > &res)
{
     if(curr_sum==S)
     {
         res.push_back(h);
        return;
    }
    else if(curr_sum>S)
        return;
    if(i==v.size())
        return;
    // take i=i
    h.push_back(v[i]);
    unlimited_times(v,i,curr_sum+v[i],S,h,res);
    h.pop_back();
     //leave i=i+1
    unlimited_times(v,i+1,curr_sum,S,h,res);
}
int main()
{
    vector<int> v={8, 10, 6, 11, 1, 16, 8 };
    vector<int> h;
    sort(v.begin(),v.end());
    vector< vector<int> > res;
    unlimited_times(v,0,0,28,h,res);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
