#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4,2,5,3,6};
    int time=4;
    priority_queue< pair<int,int> > pq;
    for(int i=0;i<v.size();i++)
    {
        pq.push(make_pair(v[i],i));
    }
    for(int i=0;i<time;i++)
    {

    }
}
