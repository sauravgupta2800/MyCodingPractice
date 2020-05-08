#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i;
    bool yes=false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            yes=true;
            break;
        }
    }
    if(yes==false)
        return true;
    else
        return false;
}
int main()
{
    string str="abcd";
    int n=str.length();
    if(isprime(n) || n<2)
            cout<<-1;
    else
    {
        int i=2;
        while(i<n)
        {
            if(n%i==0)
            {
                break;
            }
            i++;
        }
        int j=0;
        int c=0;
        for(j=0;j<n;j++)
        {
            cout<<str[j];
            c++;
            if(c==i)
            {
                c=0;
                cout<<endl;
            }
        }
    }
}
