#include<bits/stdc++.h>
using namespace std;

const int len[10]={6,2,5,5,4,5,6,3,7,6};
int compute_segment(int x)
{
    if(x==0)
        return len[0];
    int count=0;
    while(x)
    {
        count+=len[x%10];
        x/=10;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int in[n];
        int min=INT_MAX,min_value=0,val=0;
        for(int i=0;i<n;i++)
        {
            cin>>in[i];
            val=compute_segment(in[i]);
            if(min>val)
            {
                min=val;
                min_value=in[i];
            }
        }
        cout<<min_value<<endl;
    }
}
