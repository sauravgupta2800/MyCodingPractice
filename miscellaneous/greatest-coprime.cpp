#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a=10,b=1;
    while(gcd(a,b)!=1)
        a=a/gcd(a,b);

    cout<<a;
}
