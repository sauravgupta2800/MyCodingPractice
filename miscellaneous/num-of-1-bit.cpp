#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n=7;
    int pos=-1,count=0;
    for(i=0;i<31;i++)
    {
        pos++;
        if(n&(1<<(pos)))
        {
            count++;
        }
    }
    cout<<count<<endl;
}
