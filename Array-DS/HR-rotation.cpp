#include<bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k,vector<int> queries)
{
    int i,j,l,tmp;
    vector<int> c;
    for(j=0;j<k;j++)
    {
        tmp=a[a.size()-1];
        for(i=a.size()-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[i+1]=tmp;
    }
    for(l=0;l<queries.size();l++)
    {
        c.push_back(a[queries[l]]);
    }
    return c;
}
int main()
{
    vector<int> v={1,2,3},q={0,1,2};
    vector<int> v2;
    v2=circularArrayRotation(v,2,q);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
}
