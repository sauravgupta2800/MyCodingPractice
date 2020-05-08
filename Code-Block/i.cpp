#include<bits/stdc++.h>
using namespace std;
int convert(string str)
{
    // string to binary to decimal
    string b="";
    for(int i=0;i<str.size();i++)
    {
        if((str[i]-'0')%2==0)
        {
            b+='0';
        }
        else
        {
            b+='1';
        }
    }
    int j=0;
    int res=0;
    for(int i=b.size()-1;i>=0;i--)
    {
        if(b[i]=='1')
        {
            res+=pow(2,j);
        }
        j++;
    }
    return res;
}
int main()
{
    string str="361";
    convert(str);
}
