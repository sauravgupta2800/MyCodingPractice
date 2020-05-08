#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={34,36,34,12,11,40,12,5,5,6,12,11};
    unordered_map<int,int> um;
    for(int i=0;i<v.size();i++)
    {
        um[v[i]]++;
    }
    bool dup=true;
    int ans;
    unordered_map<int,int>:: iterator itr;
    for(itr=um.begin();itr!=um.end();itr++)
    {
        if(itr->second>1)
        {
            ans=itr->first;
            dup=true;
            break;
        }
    }
    if(dup==false)
        return -1;
    else
        return ans;
}
