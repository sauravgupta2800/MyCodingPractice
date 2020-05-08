#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int l=0,b=INT_MIN,n=8;
    for(int i=0;i<n;i++)
    {
        l=l+arr[i];
        b=max(b,l);
        if(l<0)
            l=0;
    }
    cout<<b;
}
