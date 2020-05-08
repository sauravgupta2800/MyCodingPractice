#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={3,2,1};
    int n=v.size();

    int i,j;
    for(i=n-1;i>0;i--)
    {
        if(v[i]>v[i-1])
        {
            break;
        }
    }

    if(i>0)
    {
        for(j=n-1;j>=i;j--)
        {
            if(v[j]>v[i-1])
            {
                swap(v[j],v[i-1]);
                break;
            }
        }
    }
    int m=n-1;
    while(i<m)
    {
        swap(v[i],v[m]);
        i++;
        m--;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
