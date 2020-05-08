#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0, 6, 0, 6, 4, 8, 8, 1 };
    int pos=v.size()-1,i=0;
    v[pos]=v[pos]+1;
    int carry=v[pos]/10;
    v[pos]=v[pos]%10;
    for(i=pos-1;i>=0;i--)
    {
        if(carry==1)
        {
            v[i]=v[i]+1;
            carry=v[i]/10;
            v[i]=v[i]%10;
        }
    }
    if(carry==1)
    {
        v.insert(v.begin(),1);
    }
    for(auto i=v.begin();i!=v.end();i++)
    {
        if(*i==0)
        {
            v.erase(i);
            i--;
        }
        else
            break;
    }
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}
