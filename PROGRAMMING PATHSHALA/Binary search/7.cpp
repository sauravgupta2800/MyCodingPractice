#include<bits/stdc++.h>
using namespace std;

int peak_element(vector<int> v)
{
    int beg=0,end=v.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        //cout<<"mid:"<<mid<<endl;
        if(mid==0)
        {
            if(mid+1<v.size() && v[mid]>=v[mid+1])
                return v[mid];
                if(mid+1<v.size() && v[mid]<=v[mid+1])
                    return v[mid+1];
        }
        if(mid==v.size()-1)
        {
            if(mid-1>=0 && v[mid-1]<=v[mid])
                return v[mid];
        }
        if(v[mid-1]<=v[mid] && v[mid]>=v[mid+1])
            return v[mid];
        if(v[mid-1]>v[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    return -1;
}
int main()
{
    vector<int> v={10,11,111};
    cout<<peak_element(v);
}
