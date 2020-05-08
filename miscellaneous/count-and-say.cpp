#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"11";
    int j,i;
    string prev="11";
    string current="";
    for(i=3;i<=n;i++)
    {
        //count frequency and number of consecutive integers
        int c=1;
        int len=prev.length();
        for(j=0;j<len-1;j++)
        {
            if(prev[j]==prev[j+1])
            {
                c++;
            }
            else if(prev[j]!=prev[j+1])
            {
                // count + str[j]
                current.push_back(c+'0');
                current.push_back(prev[j]);
                //cout<<"count:"<<c<<" num:"<<str[j]<<endl;
                c=1;
            }
        }
        //if(str[str.length()-1]==str[str.length()-2])
        {
            current.push_back(c+'0');
            current.push_back(prev[j]);
            //cout<<"count:"<<c<<" num:"<<str[j]<<endl;
        }
        prev=current;
        current="";
        cout<<prev<<endl;
    }
}
