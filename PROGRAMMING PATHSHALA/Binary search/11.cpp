#include<bits/stdc++.h>
using namespace std;

int find_which_occured_once(vector<int> v)
{
    int beg=0,end=v.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(mid==0)
        {
            if(v[mid+1]>v[mid])
                return v[mid];
        }
        if(mid==v.size()-1)
        {
            if(v[mid-1]<v[mid])
                return v[mid];
        }
        if(v[mid-1]<v[mid] && v[mid]<v[mid+1])
            return v[mid];
        //v[mid-1]==v[mid]?mid=mid-1:mid=mid;
        if(mid%2==0 && v[mid]==v[mid+1])
            beg=mid+1;
        else if(v[mid-1]==v[mid] && (mid-1)%2==0)
            beg=mid+1;
        else
            end=mid-1;
    }
}
int main()
{
    vector<int> v={1,2,2,3,3};
    cout<<find_which_occured_once(v);
}
