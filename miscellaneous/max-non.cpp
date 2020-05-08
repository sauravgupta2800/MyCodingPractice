#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A={-75249, 43658, 11272, -50878, 37709, 38165, -43042, -22503 };
    int curr_count=0,m=0,i=0,up=0,s=0,e=0;
    int first_item=0,max_item=0;
    for(i=0;i<A.size();i++)
    {
        curr_count=0;
        up=i;
        first_item=A[i];
        while(A[i]>=0 && i<A.size())
        {
            curr_count++;
            i++;
        }
        if(curr_count>m)
        {
            max_item=first_item;
            m=curr_count;
            s=up;
            e=i;
        }
        else if(curr_count==m)
        {
            if(first_item<max_item)
            {
                max_item=first_item;
                m=curr_count;
                s=up;
                e=i;
            }
        }

    }
    for(i=s;i<e;i++)
    {
        cout<<A[i]<<" ";
    }
}
