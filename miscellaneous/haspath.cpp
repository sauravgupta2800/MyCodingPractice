#include<bits/stdc++.h>
using namespace std;

bool fun(int pos,int N)
{
    if(pos==N)
        return 1;
    if(pos>N)
        return 0;

    bool x=fun(pos+3,N);
    bool y=fun(pos+4,N);
    return x||y;
}
int main()
{
    cout<<fun(0,12);
}
