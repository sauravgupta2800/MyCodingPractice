#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==0 || n==1)
        return n;
    int beg=1,end=n;
    while(beg<end)
    {
        int mid=(beg+end)/2;
        if(mid*mid<=n && (mid+1)*(mid+1)>n)
            return mid;
        if(mid*mid>n)
            end=mid-1;
        else
            beg=mid+1;
    }
}
int main()
{
    cout<<fun(39);
}
