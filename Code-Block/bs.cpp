#include<bits/stdc++.h>
using namespace std;

int f(vector<int> v)
{
    int end=v.size()-1;
    int n=v.size();
    int beg=0;
    int save=v[0];
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if( mid-1>=0 && mid+1<n && v[mid-1]>=v[mid] && v[mid]<=v[mid+1])
            return mid;
        else if(mid-1==-1 && v[mid]<=v[mid+1])
            return mid;
        else if(mid+1==n && v[mid-1]<=v[mid])
            return mid;
        if(save>=v[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
}
int main()
{
    vector<int> v={1,2,3,4,5};
    cout<<v[f(v)];
}
