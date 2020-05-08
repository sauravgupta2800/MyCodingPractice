#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={6,2,1,5,4,3,0};
    int k=v.size()-2;
    while(k>=0 && v[k]>=v[k+1])
        k--;
    if(k==-1)
        return {};
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]>v[k])
        {
            swap(v[i],v[k]);
            break;
        }
    }
    reverse(v.begin()+k+1,v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";




}
