#include<bits/stdc++.h>
using namespace std;
void fun2(char s[],int i,int n)
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;
        return;
    }
    fun2(s,i+1,n);
    if(s[i]>=65) // differentiating with num and alpha
    {
        if(s[i]>=65 && s[i]<=90) // capital letter
            s[i]+=32;
        else                     // small letter
            s[i]-=32;
        fun2(s,i+1,n);

        if(s[i]>=65 && s[i]<=90) // capital letter
            s[i]+=32;
        else                     // small letter
            s[i]-=32;
    }
}


void fun(string s,int i)
{
    if(i==s.length())
    {
        cout<<s<<endl;
        return;
    }
    fun(s,i+1);
    if(s[i]>=65) // differentiating with num and alpha
    {
        if(s[i]>=65 && s[i]<=90) // capital letter
            s[i]+=32;
        else                     // small letter
            s[i]-=32;
        fun(s,i+1);
    }
}
int main()
{
    string s="a1b2c3";
    char c[]={'a','b','c'};
    fun2(c,0,3);
}
