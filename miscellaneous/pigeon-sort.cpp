#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={65396173, 45808477, 10172062, 28790225};
    int i,j,n=v.size(),mini=v[0],maxi=v[0];
    for(i=0;i<n;i++)
    {
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    int range=maxi-mini+1;
    vector<int> holes[range];
    for(i=0;i<n;i++)
    {
        holes[int(v[i]-mini)].push_back(v[i]);
    }
    int index=0;
    vector<int> res(n);
    for(i=0;i<range;i++)
    {
        vector<int>::iterator itr;
        for(itr=holes[i].begin();itr!=holes[i].end();++itr)
        {
            res[index++]=*itr;
        }
        itr=holes[i].erase(itr);
    }
    for(i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    int gap=0;
    if(n<2)
        return 0;
    for(i=0;i<n-1;i++)
    {
        gap=max(gap,res[i+1]-res[i]);
    }
    cout<<gap;
}
