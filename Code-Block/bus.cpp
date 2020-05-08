#include<bits/stdc++.h>
using namespace std;
struct str
{
    int ind;
    int val;
    int seat;
};

bool cmp(str a,str b){return a.val<b.val;}
int main()
{
    vector<int> v={3,1};
    string arr="0011";
    vector<int> res;
    int n=v.size();
    struct str s[n];
    for(int i=0;i<n;i++)
    {
        s[i].ind=i+1;
        s[i].val=v[i];
        s[i].seat=-1;
    }
    std::sort(s,s+n,cmp);
    /*for(int i=0;i<n;i++)
    {
        cout<<s[i].ind<<" "<<s[i].val<<" "<<s[i].seat<<endl;
    }*/

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='0')
        {
            for(int i=0;i<n;i++)
            {
                if(s[i].seat==1)
                {
                    continue;
                }
                if(s[i].seat==-1)
                {
                    s[i].seat=0;
                    res.push_back(s[i].ind);
                    break;
                }
            }
        }
        else if(arr[i]=='1')
        {
            for(int i=n-1;i>=0;i--)
            {
                if(s[i].seat==1)
                {
                    continue;
                }
                if(s[i].seat==0)
                {
                    s[i].seat=1;
                    res.push_back(s[i].ind);
                    break;
                }
            }
        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
