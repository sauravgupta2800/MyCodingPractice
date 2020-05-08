#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1};
    int i,j=0;
    //segregate.
    int n_count=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<0)
        {
            n_count++;
            swap(v[j],v[i]);
            j++;
        }
        if(n_count==v.size())
        {
            cout<<1;
        }
    }
    v.erase(v.begin(),v.begin()+j);
    cout<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    for(i=0;i<v.size();i++)
    {
        if((abs(v[i])-1)<v.size() && (abs(v[i])-1)>=0)
        {
            v[abs(v[i])-1]=-v[abs(v[i])-1];
        }
    }
    cout<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<"-";
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]>=0)
        {
            cout<<i+1;
            break;
        }
    }

}
