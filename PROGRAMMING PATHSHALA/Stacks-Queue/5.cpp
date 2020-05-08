#include<bits/stdc++.h>
using namespace std;
void jumping_num(int x,int K)
{
    if(x==0)
    {
        cout<<x<<" ";
        return;
    }
    if(x<=K)
    {
        cout<<x<<" ";
        int m=x%10;
        if(m==0)
        {
            jumping_num(x*10+m+1,K);
        }
        else if(m==9)
        {
            jumping_num(x*10+m-1,K);
        }
        else
        {
            jumping_num(x*10+m+1,K);
            jumping_num(x*10+m-1,K);
        }
    }
}
int main()
{
    for(int i=0;i<=9;i++)
        jumping_num(i,100);
}
