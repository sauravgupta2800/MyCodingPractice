#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string str)
{
    int i;
    stack<int> s;
    char x;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='{'||str[i]=='('||str[i]=='[')
        {
            s.push(str[i]);
            continue;
        }
        if(s.empty())
            return false;

        switch(str[i])
        {
            case ')':
                x=s.top();
                s.pop();
                if(x=='{'||x=='[')
                    return false;
                    break;

            case '}':
                x=s.top();
                s.pop();
                if(x=='('||x=='[')
                    return false;
                    break;

            case ']':
                x=s.top();
                s.pop();
                if(x=='('||x=='{')
                    return false;
                    break;
        }
    }
    return s.empty();
}
int main()
{
    //;
    stack<int> s;
    cout<<isbalanced("{[])}");
}
