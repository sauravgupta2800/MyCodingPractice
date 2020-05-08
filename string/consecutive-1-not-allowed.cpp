#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int c0=1,c1=1;
    for(int i=2;i<=n;i++)
    {
        int tmp=c0;
        c0=c0+c1;
        c1=tmp;
    }
    cout<<c0+c1;
}
