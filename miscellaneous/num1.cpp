#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,2,3,1};
    int m1=v[0];
    int c1=0;
    int m2=v[1];
    int c2=0;
    int i,j,sum=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==m1)
            c1++;
        if(v[i]==m2)
            c2++;
    }
    int d=max(c1,c2);
    int count=0;
    for(i=0;i<31;i++)
    {
        int pos=1;
        count=0;
        for(j=0;j<v.size();j++)
        {
            if( v[j] & pos<<i)
            {
                count++;
            }
        }
        if(count%d!=0)
        {
            sum+=pow(2,i);
        }
    }
    cout<<sum;
}
