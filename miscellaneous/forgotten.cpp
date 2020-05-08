#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,l;
        cin>>n>>k;
        //n=4,k=1;
        unordered_map< string, int> m;
        vector<string> v;
        string str;
        for(i=0;i<n;i++)
        {
            cin>>str;
            m[str]++;
            v.push_back(str);
        }
        while(k--)
        {
            cin>>l;
            while(l--)
            {
                cin>>str;
                if(m.find(str)!=m.end())
                    m[str]++;
            }
        }

        for(i=0;i<v.size();i++)
        {
            if(m.find(v[i])->second==1)
            {
                cout<<"NO"<<" ";
            }
            else
            {
                cout<<"YES"<<" ";
            }
        }
        /*cout<<endl;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            cout<<itr->first<<" "<<itr->second<<endl;
        }*/
    }
}
