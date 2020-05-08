#include<bits/stdc++.h>
using namespace std;
int main()
{
    // minimum swaps required to bring all elements less than equal to K
    vector<int> v={1,12,10,3,14,10,5};
    int n=v.size();
    int K=8;
    int cnt=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(v[i]<=K)
            cnt++;
    }
    // make window of size cnt
    int bad=0;
    for(i=0;i<cnt;i++)
    {
        if(v[i]>K)
        {
            bad++;
        }
    }
    int ans=bad;
    int j;
    for(i=0,j=cnt;j<n;i++,j++)
    {
        if(v[i]>K)
            bad--;
        if(v[j]>K)
            bad++;
        ans=min(ans,bad);
    }
    cout<<ans;

}
