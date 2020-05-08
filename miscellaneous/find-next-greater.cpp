#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //cout<<str;
        int pos=0;
        for(int i=n-1;i>0;i--)
        {
            if(a[i-1]<a[n-1])
            {
                pos=i-1;
                break;
            }
        }
        int loc=pos;
        //cout<<str[pos]<<endl;
        //cout<<str<<endl;
        swap(a[pos],a[n-1]);
        //cout<<str<<endl;
        sort(a+n-loc-1,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }*/

    int a[]={1,2,30,4,5};
    sort(a+2,a+5);
    for(int i=0;i<5;i++)
    {

        cout<<a[i]<<" ";
    }
}
