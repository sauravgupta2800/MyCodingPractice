#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "A man, a plan, a canal: Panama";
    //string str="race a car";
    string res="";
    int pos;
    for(int i=0;i<str.length();i++)
    {
        pos=str[i];
        if(pos<=90 && pos>=65)
            //cout<<char(pos);
            res+=tolower(char(pos));
        else if(pos<=122 && pos>=97)
            //cout<<char(pos);
            res+=char(pos);
        else if(pos>=48 && pos<=57)
            //cout<<char(pos);
            res+=char(pos);
    }
    string old=res;
    reverse(res.begin(),res.end());
    if(old==res)
        cout<<1;
    else
        cout<<0;

}
