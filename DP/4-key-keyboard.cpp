#include<bits/stdc++.h>
using namespace std;

int fun(n)
{
    if(n<=6)
        return n;
    int maxi=INT_MIN;
    for(int i=2;i<=n-2;i++)
    {
        int tmp=i*fun(n-i-1)
        if(tmp>maxi)
        {
            maxi=tmp;
        }
    }
    return maxi;
}
int main()
{
    cout<<fun(4);
}
