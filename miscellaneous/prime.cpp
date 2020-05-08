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

bool isdigits_prime(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    //cout<<"sum: "<<sum<<endl;
    if(isprime(sum))
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i) && isdigits_prime(i))
            cout<<i<<" ";
    }
}
