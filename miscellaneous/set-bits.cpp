#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n=10;
    int count=0;
    for(int i=0;i<=11;i++)
    {
        if(n&1<<i)
            count++;
    }
    cout<<count;
}
