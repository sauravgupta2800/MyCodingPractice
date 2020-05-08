#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={25,32,7,77,24};
    int n=v.size();
    int leftmin[n],i=0;
    int rightmax[n];
    leftmin[0]=v[0];
    for(i=1;i<n;i++)
    {
        leftmin[i]=min(leftmin[i-1],v[i]);
    }
    rightmax[n-1]=v[n-1];
    for(i=n-2;i>=0;i--)
    {
        rightmax[i]=max(rightmax[i+1],v[i]);
    }
    int j=0,d=-1;
    i=0;
    while(i<n && j<n)
    {
        if(leftmin[i]<rightmax[j])
        {
            d=max(d,j-i);
            j++;
        }
        else
            i++;
        //cout<<endl<<i<<j;
    }
    cout<<d<<endl;
}
