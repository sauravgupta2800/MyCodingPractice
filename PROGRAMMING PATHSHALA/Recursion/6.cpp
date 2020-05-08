// All permutation of strings
#include<bits/stdc++.h>
using namespace std;

void fun(int i, string s)
{
    if(i==s.size())
    {
        cout<<s<<endl;
        return;
    }
    for(int k=i;k<s.size();k++)
    {
        swap(s[k],s[i]);
        fun(i+1,s);
        swap(s[i],s[k]);
    }
}

void fun1(int i,char in[],int n)
{
    if(i==n)
    {
        for(int l=0;l<n;l++)
            cout<<in[l]<<" ";
        cout<<endl;
        return;
    }
    for(int k=i;k<n;k++)
    {
        swap(in[k],in[i]);
        fun1(i+1,in,n);
        swap(in[i],in[k]);
    }
}
int main()
{
    fun(0,"abc");
    char in[]="abc";
    cout<<endl;
    fun1(0,in,3);
}
