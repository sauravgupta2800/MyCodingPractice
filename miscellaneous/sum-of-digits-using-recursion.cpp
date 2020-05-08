#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n==0)
        return 0;
    int sum= n%10 + fun(n/10);
    if(sum>9)
    {
        sum=fun(sum);
    }
    return sum;
}
int main()
{
    cout<<fun(1259);
}
