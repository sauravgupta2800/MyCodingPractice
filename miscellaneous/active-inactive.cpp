#include<bits/stdc++.h>
using namespace std;

int check(int v[],int i,int n)
{
    int left=((i-1)<0)?0:v[i-1];
    int right=((i+1)==n)?0:v[i+1];
    if(left==right)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n=1;
    int v1[n]={1};
    int v2[n];
    int k=2;
    for(int t=1;t<=k;t++)
    {
        if(t%2!=0)//odd
        {
            for(int i=0;i<n;i++)
            {
                v2[i]=check(v1,i,n);
            }
        }
        else//even
        {
            for(int i=0;i<n;i++)
            {
                v1[i]=check(v2,i,n);
            }
        }
    }
    if(k%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<v2[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
    }
}
