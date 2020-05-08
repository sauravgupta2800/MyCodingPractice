#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str;
    cout<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
            continue;
        cout<<str[i];
    }
}
