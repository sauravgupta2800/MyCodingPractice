#include<bits/stdc++.h>
using namespace std;

int coin(int i,vector<int> c,int sum)
{
    if(sum<=0)
    {
        return 0;
    }
    if(i==c.size())
        return 0;
    return 1+min(coin(i,c,sum-c[i]),coin(i+1,c,sum));
}
int ribbon(int n,int a,int b,int c)
{
    if(n<=0)
        return 0;
    int c1=INT_MIN,c2=INT_MIN,c3=INT_MIN;
    if(n-a>=0)
        c1=1+ribbon(n-a,a,b,c);
    if(n-b>=0)
        c2=1+ribbon(n-b,a,b,c);
    if(n-c>=0)
        c3=1+ribbon(n-c,a,b,c);
    return max(c1,max(c2,c3));
}
int main()
{
    vector<int> v={1,3,5};
    //cout<<coin(0,v,11);
    cout<<ribbon(5,5,3,2);
}
