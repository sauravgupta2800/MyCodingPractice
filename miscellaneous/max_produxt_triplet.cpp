#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0, -1, 3, 100, -70, -5};
    int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
    int mini1=INT_MAX,mini2=INT_MAX;
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

        if(curr<=mini1)
        {
            mini2=mini1;mini1=curr;;
        }
        else if(curr<mini2)
        {
            mini2=curr;
        }
    }
    cout<<m1<<endl;
    cout<<mini1*mini2*m1<<endl;
    cout<<max(m3*m2*m1,mini1*mini2*m1);
}
