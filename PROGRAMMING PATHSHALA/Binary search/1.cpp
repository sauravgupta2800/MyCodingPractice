#include<bits/stdc++.h>
using namespace std;

int first_occurence(vector<int> arr,int key)
{
    int beg=0,end=arr.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(mid==0)
        {
            if(arr[mid]==key)
                return mid;
            if(mid+1<arr.size() && arr[mid+1]==key)
                return mid+1;
            return -1;
        }
        if(arr[mid-1]<arr[mid] && arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            beg=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int last_occurence(vector<int> arr,int key)
{
    int beg=0,end=arr.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(mid==arr.size()-1)
        {
            if(arr[mid]==key)
                return mid;
            return -1;
        }
        if(arr[mid+1]>arr[mid] && arr[mid]==key)
            return mid;
        if(arr[mid]<=key)
            beg=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int find_index(vector<int> v,int key)
{
    int beg=0,end=v.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(v[mid]==key)
            return mid;
        if(v[mid]<key)
            beg=mid+1;
        else
            end=mid-1;
    }
    return beg;
}
int frequency(vector<int> v,int key)
{
    int left=first_occurence(v,key);
    int right=last_occurence(v,key);
    return left!=-1?right-left+1:-1;
}

int main()
{
    vector<int> v={1,4,5,6,7};
    vector< vector<int> > m{{1,2,10},{11,14,16},{17,18,19}};
    //cout<<first_occurence(v,4)<<endl;
    //cout<<last_occurence(v,4)<<endl;
    //cout<<frequency(v,10)<<endl;
    //cout<<find_index(v,8);
    find_key_index_in_matrix(m,)
}
