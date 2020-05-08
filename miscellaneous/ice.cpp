#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,5,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,k=4;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==k)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
}
