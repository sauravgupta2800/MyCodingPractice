#include<bits/stdc++.h>
using namespace std;

int find_row(vector< vector<int> > m, int k )
{
    int beg=0,end=m.size()-1;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(m[mid][0]==k)
            return mid;
        if(m[mid][0]<k)
            beg=mid+1;
        else
            end=mid-1;
    }
    return beg-1;
}
string find_key_index_in_matrix(vector< vector<int> > m,int key)
{
    int row=find_row(m,key);
    int beg=0,end=m[0].size();
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(m[row][mid]==key)
            return to_string(row)+" "+to_string(mid);
        if(m[row][mid]<key)
            beg=mid+1;
        else
            end=mid-1;
    }
    return "-1";
}
int main()
{
    vector< vector<int> > m{{1,2,10},{11,14,16},{18,19,29}};
    cout<<find_key_index_in_matrix(m,16);
}
