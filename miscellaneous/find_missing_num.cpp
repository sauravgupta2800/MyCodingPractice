#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,2,1,4};
    int i;
    int n=v.size();
    int xor1=v[0];
    for(int i=1;i<n;i++)
        xor1=xor1^v[i];
    int set_bit=xor1&~(xor1-1);
    int x=0,y=0;
    for(i=0;i<n;i++)
    {
        if(set_bit&v[i])
            x^=v[i];
        else
            y^=v[i];
    }
    cout<<x<<" "<<y;
}
