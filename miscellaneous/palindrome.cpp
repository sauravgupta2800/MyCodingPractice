#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n=12321;
    int save=n;
    int r=0;
    int res=0;
    while(n)
    {
        r=n%10;
        res=res*10+r;
        n/=10;
    }
    if(save==res)
        cout<<"Y";
    else
        cout<<"N";
}
