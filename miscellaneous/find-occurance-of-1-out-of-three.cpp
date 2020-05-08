#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,4,3,3,2,2,3,1,1};
    int i,j;
    int res=0;
    for(i=0;i<32;i++)
    {
        int pos=1<<i;
        int count=0;
        for(j=0;j<v.size();j++)
        {
            if(pos&v[j])
            {
                count++;
            }
        }
        if(count%3!=0)
        {
            res+=pow(2,i);
        }
    }
    cout<<res;
}
