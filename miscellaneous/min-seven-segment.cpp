#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[]={0,1,2,3,4,5,6,7,8,9};
    int len[]={6,2,5,5,4,5,6,3,7,6};

    vector< pair <int,int> > vect;
    int n=sizeof(num)/sizeof(num[0]);

    for(int i=0;i<n;i++)
    {
        vect.push_back( make_pair(num[i],len[i]) );
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int in[n];
        int min=INT_MAX,min_value=0;
        for(int i=0;i<n;i++)
        {
            cin>>in[i];
            if(min>vect[in[i]].second)
            {
                min=vect[in[i]].second;
                min_value=in[i];
            }
        }
        cout<<min_value<<endl;
    }
}
