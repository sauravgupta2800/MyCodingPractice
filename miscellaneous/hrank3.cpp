#include<bits/stdc++.h>
using namespace std;
void fun(int i,vector<int> v,int n,int k,int b,int c)
{
    if(k<=0)
        return;
    if(i==n)
    {
        cout<<c;
        return;
    }
    if(v[i]<k)
    {
        fun(i+1,v,n,k-v[i],b,c+1);
    }
    else
    {
        fun(i+1,v,n,k+b,b,c+1);
    }
}
int main()
{
    int n=5,k=3,b=5;
    vector<int> v={10,6,5,5,2};
    fun(0,v,n,k,b,0);
}
