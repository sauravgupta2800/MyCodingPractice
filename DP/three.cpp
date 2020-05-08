#include<bits/stdc++.h>
using namespace std;

int highestPowerof2(unsigned long long n)
{
   int p = (int)log2(n);
   return (int)pow(2, p);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n;
        cin>>n;
        cout<<highestPowerof2(n)<<endl;
    }
}
