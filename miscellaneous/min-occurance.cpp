#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        if(n!=0)
        {
            vector< string > v;//={"saraswati","shyamapadmavatialkasundarishushmavati","shivgami","devsena","deeksha"};
            unordered_map<char,int> m;
            int curr_size=-1,min=INT_MAX;
            string ans;
            for(int i=0;i<n;i++)
            {
                cin>>str;
                v.push_back(str);
            }
            for(int i=0;i<v.size();i++)
            {
                str=v[i];
                for(int i=0;i<str.size();i++)
                {
                    m[str[i]]++;
                }
                curr_size=m.size();
                m.clear();
                if(curr_size<=min)
                {
                    ans=str;
                    min=curr_size;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        ans=
    }
    return 0;
}
