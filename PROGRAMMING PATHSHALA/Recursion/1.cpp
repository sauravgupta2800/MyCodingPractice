#include<bits/stdc++.h>
using namespace std;
int fun(int n,int k)
{
    if(k==0)
        return 1;
    if(k%2==0)
    {
        int part=fun(n,k/2);
        return part*part;
    }
    else
    {
        int part=fun(n,k/2);
        return n*part*part;
    }
}
int main()
{
    cout<<fun(2,5);
}
