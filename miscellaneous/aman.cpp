#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,b=0,c=3;
    int n_a=a,p_a=a;
    if(a<=b)
    {
        while(1)
        {
            if(p_a==b)
            {
                cout<<"YES\n";
                break;
            }
            p_a+=c;
            if(p_a>b)
            {
                cout<<"NO\n";
                break;
            }
        }
    }
    else
    {
        n_a=a;
        while(1)
        {
            if(n_a==b)
            {
                cout<<"YES\n";
                break;
            }
            n_a-=c;

            if(n_a<b)
            {
                cout<<"NO\n";
                break;
            }
        }
    }
}
