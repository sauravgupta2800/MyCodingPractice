#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int m,int b[],int n)
{
    int i=0,j=0,k=0;
    int res[m+n];
    while(i!=m && j!=n)
    {
        if(a[i]<b[j])
            res[k++]=a[i++];
        else
            res[k++]=b[j++];
    }
    while(i!=m)
        res[k++]=a[i++];
    while(j!=n)
        res[k++]=b[j++];
    for(int i=0;i<m+n;i++)
        cout<<res[i];
}
int main()
{
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    merge(a,4,b,4);
}
