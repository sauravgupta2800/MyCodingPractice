#include<bits/stdc++.h>
using namespace std;
bool fun(string s)
{
    int freq[26];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<s.size();i++)
    {
        int key=s[i]-'a';
        if(freq[key])
        {
            freq[key]--;
        }
        else
        {
            freq[key]++;
        }
    }
    if(s.size()%2==0)
    {
        for(int i:freq)
        {
            if(i>=1)
             return false;
        }
        return true;
    }
    else
    {
        int c=0;
        for(int i:freq)
        {
            if(i>=1)
             c++;
            if(c>1)
                return false;
        }
        return true;
    }
}
int main()
{
    string s="geeksforgeek";
    cout<<fun(s);

}
