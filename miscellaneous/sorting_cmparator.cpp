#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    if(a%2!=0 && b%2==0)//odd
        return true;
    if(a%2==0 && b%2!=0)//even
        return false;
    if(a%2!=0 && b%2!=0)
    {
        if(a>b)
            return true;
        return false;
    }
    if(a%2==0 && b%2==0)
    {
        if(a<b)
            return true;
        return false;
    }
}
int main()
{
    vector<int> v={1,2,3,5,4,7,10};
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
