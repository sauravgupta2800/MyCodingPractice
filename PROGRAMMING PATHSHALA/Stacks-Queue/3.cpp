#include<bits/stdc++.h>
using namespace std;

void NGE(vector<int> v)
{
    stack<int> s;
    s.push(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<s.top())
            s.push(v[i]);
        else
        {
            while(!s.empty() && v[i]>=s.top())
            {
                cout<<s.top()<<"-->"<<v[i]<<endl;
                s.pop();
            }
            s.push(v[i]);
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<"-->"<<"-1"<<endl;
        s.pop();
    }
}
int main()
{

    vector<int> v={9,9,7,3,2,5,8,10};
    NGE(v);
}
