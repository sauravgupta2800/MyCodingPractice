#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    vector<int> v={1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 8, 9, 9, 10, 10, 10};
    //vector<int> v={1,2,2,4,4,5,5,6,6,7,7,7};
    int n=v.size();
    int l=0,r=n-1,mid;
    int item=10;
    while(l<r)
    {
        mid=(l+r)/2;
        if(v[mid]>=item)
            r=mid;
        else
            l=mid+1;
    }
    cout<<v[l]<<endl;
    cout<<l<<endl;

    int pos1=l;
    l=0,r=n-1,mid;
    int pos2;

    bool present=false;
    while(l<=r)
    {
        mid=(l+r)/2;
        //cout<<"mid: "<<mid<<endl;
        //cout<<"L: "<<l<<" "<<"R: "<<r<<endl;
        if(v[mid]==item &&mid+1<n&&v[mid]<v[mid+1])
        {
            //cout<<"HH";
            pos2=mid;
            present=true;
            break;
        }
        if(v[mid]==item && mid+1==n)
        {
            //cout<<"HH";
            pos2=mid;
            present=true;
            break;
        }

        if(v[mid]<=item)
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<v[pos2]<<endl;
    cout<<pos2<<endl;

    cout<<"count: "<<pos2-pos1+1;
}
