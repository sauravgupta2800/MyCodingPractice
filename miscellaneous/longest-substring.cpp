#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int> m;
    string str="abcabdabcdefh";
    int i=0,j=0;
    int sol=0,temp=0;
    while(j<str.length())
    {
        if(m.find(str[j])==m.end())// not found
        {
            m[str[j]]=1;
            j++;
            temp++;
        }
        else
        {
            while(str[i]!=str[j])
            {
                m.erase(str[i]);
                i++;
                temp--;
            }
            if(i!=j)
                i++;
            temp--;
            m.erase(str[j]);
        }
        sol=max(sol,temp);
    }
    cout<<sol;
}
