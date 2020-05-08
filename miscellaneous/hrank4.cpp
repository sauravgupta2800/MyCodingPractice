#include<bits/stdc++.h>
using namespace std;
int is456(int n)
{
    int r=0,inner=0,outer=0;
    while(n)
    {
        r=n%10;
        if(r==4 || r==5|| r==6)
            inner++;
        outer++;
        n=n/10;
    }
    if(inner==outer)
        return 1;
    else
        return 0;
}
int main()
{
    int n=100,k=2;
    for(int i=4;i<=n;i+=k)
    {
        if(is456(i))
            cout<<i<<" ";
    }
}
