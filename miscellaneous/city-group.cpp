#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000000];
    typedef std::multimap<int, int> mmap;
    mmap m;
    typedef std::pair<int, int> mmap_pair;

    int k,n;
    cin>>n>>k;

    //input
    for(int h=1;h<=k;h++)
    {
        int i=0,j=0;
        char tmp;
        do{
            scanf("%d%c",&arr[i],&tmp);
            i++;
        }while(tmp!='\n');

        for(int j=0;j<i;j++)
        {
            m.insert(make_pair(h,arr[j]));
        }
    }
    int q1,q2,q;
    cin>>q;
    while(q--)
    {
        cin>>q1>>q2;
        int d1=0,d2=0;
        for(mmap::iterator i=m.begin();i!=m.end();i++)
        {
            if(i->second==q1)
            {
                d1=i->first;
                break;
            }
        }
        for(mmap::iterator i=m.begin();i!=m.end();i++)
        {
            if(i->second==q2)
            {
                d2=i->first;
                break;
            }
        }
        cout<<abs(d1-d2)<<endl;

    }
}
