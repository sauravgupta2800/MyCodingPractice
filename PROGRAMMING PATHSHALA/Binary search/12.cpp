#include<bits/stdc++.h>
using namespace std;

string Nth_Kth_character(int N,int K)
{
    int beg=0,end=pow(2,N+1)-1;
    string c="0";
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(mid==K)
        {
            return c;
        }
        if(mid>K)
        {
            c=="0"?c="1":c="0";
            beg=mid+1;
        }
        else
            end=mid-1;
    }
}
int main()
{
    //vector<int> v={1,2,2,3,3};
    int N=2,K=1;
    cout<<Nth_Kth_character(N,K);
}
