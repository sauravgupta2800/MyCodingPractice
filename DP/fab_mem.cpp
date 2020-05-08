#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int lookup[MAX];

void _initilize()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        lookup[i]=NIL;
    }
}

/* function for nth Fibonacci number */

int fib(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
        {
            lookup[n]=n;
        }
        else
        {
            lookup[n]=fib(n-1)+fib(n-2);
        }
    }
    return lookup[n];
}

int main()
{
    int n=5;
    _initilize();
    cout<<fib(4)<<endl;
    return 0;
}
