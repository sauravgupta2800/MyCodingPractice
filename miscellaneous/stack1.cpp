#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int malik;
        cin>>n>>malik;
        stack<int> s;
        s.push(malik);
        for(int i=1;i<=n;i++)
        {
            char type;
            int id;
            cin>>type;
            if(type=='P')
            {
                cin>>id;
                s.push(id);
                malik=id;
            }
            else if(type=='B')
            {
                int store;
                if(!s.empty())
                {
                    int store=s.top();
                    s.pop();
                }
                if(!s.empty())
                {
                    malik=s.top();
                    s.pop();
                }
                s.push(store);
                s.push(malik);

            }
        }
        cout<<malik<<endl;
    }
}
