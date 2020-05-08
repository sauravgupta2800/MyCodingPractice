#include<bits/stdc++.h>
using namespace std;

int find_repated(vector<int> v)
{
    int beg=0,end=v.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;

        if(mid+1==v[mid] && v[mid]==v[mid+1])
            return v[mid];
        if(mid+1==v[mid])
            beg=mid+1;
        else
            end=mid-1;
    }
}
int main()
{
    vector<int> v={1,2,3,4,5,5,6,7,8,9};
    cout<<find_repated(v);
}
