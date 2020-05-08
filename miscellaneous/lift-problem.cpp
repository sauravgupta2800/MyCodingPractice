#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,call;
    cin>>t;
    a=0;
    b=7;
    while(t--)
    {
        cin>>call;
        char ans=(abs(call-a)<=abs(call-b))?'A':'B';
        cout<<ans<<endl;
        if(abs(call-a)<=abs(call-b))
        {
            a=call;
        }
        else
            b=call;
    }
}
