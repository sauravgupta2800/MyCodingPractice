#include<bits/stdc++.h>
using namespace std;

int floor_Sqrt(int N)
{
    int beg=0,end=N;
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(mid*mid==N)
            return mid;
        if(mid*mid<N)
            beg=mid+1;
        else
            end=mid-1;
    }
    return beg-1;
}
int main()
{
    cout<<floor_Sqrt(8);
}
