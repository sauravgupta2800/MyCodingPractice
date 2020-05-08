#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> v)
{
    for(int i=0;i<pow(2,v.size());i++)
    {
        cout<<i<<endl;
        int count=0;
        while(i)
        {
            if(i&1)
                cout<<count;
            i=i>>1;
            count++;
        }
    }
}
int main()
{
    vector<int> v={1,2,3};
    fun(v);
}
