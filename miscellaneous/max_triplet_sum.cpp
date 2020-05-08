#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,4,3,1,1,5,5,6};
    int m1=0,m2=0,m3=0;
    int i=0,n=v.size();
    for(int i=0;i<n;i++)
    {
        int curr=v[i];
        if(curr>=m1)
        {
            m3=m2;m2=m1;m1=curr;
        }
        else if(curr>=m2)
        {
            m3=m2;m2=curr;
        }
        else if(curr>=m3)
        {
            m3=curr;
        }
    }
    cout<<m3<<" "<<m2<<" "<<m1;
}
