#include<bits/stdc++.h>
using namespace std;
void fun(int A)
{
    pair<int,int> p;
    vector< pair<int,int> >v;
    for(int i=0;i<=A;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if( ((i*i)+(j*j))==A )
            {
                v.push_back(make_pair(j,i));
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<"("<<v[i].first<<","<<v[i].second<<")"<<" ";
    }
}
int main()
{
    fun(9);
}
