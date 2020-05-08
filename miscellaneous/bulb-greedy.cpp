#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,0,0,0};
    int count=0;// EVEN=ORIGINAL  ODD=TOGGELLED
    int i,j;
    for(int i=0;i<v.size();i++)
    {
        if(count%2==0)
        {
            if(v[i]==0)
            {
                count++;
            }
        }
        else
        {
            if(v[i]==1)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
