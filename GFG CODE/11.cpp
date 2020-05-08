#include<bits/stdc++.h>
using namespace std;
int fun(int i,int zc,int oc,string str,int k)
{
    if(zc>=k || oc>=k)
        return 0;
    if(i==str.size())
        return 1;
    int x=0;
    if(str[i]=='0')
        x+=fun(i+1,zc,oc,str,k)+fun(i+1,zc+1,oc,str,k);
    if(str[i]=='1')
        x+=fun(i+1,zc,oc,str,k)+fun(i+1,zc,oc+1,str,k);
    return x;
}
int main()
{
    cout<<fun(0,0,0,"0111",2);
}
