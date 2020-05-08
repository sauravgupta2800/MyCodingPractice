#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3};
    int i,j;
    for(i=0;i<pow(2,v.size());i++)
    {
        for(j=0;j<v.size();j++)
        {
            if(i&(1<<j))
            {
                cout<<v[j]<<" ";
            }
        }
        cout<<endl;
    }
}
