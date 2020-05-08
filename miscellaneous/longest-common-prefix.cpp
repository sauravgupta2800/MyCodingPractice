#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str={"abcdefgh","aefghijk","abcefgh"};
    int n=str.size();
    int mini_length=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini_length=min(mini_length,int(str[i].length()));
    }
    char main;
    string ans;
    for(int i=0;i<mini_length;i++)
    {
        main=str[0][i];
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(str[j][i]==main)
            {
                count++;
                //cout<<str[j][i]<<" ";
            }
            if(count==n)
            {
                ans.push_back(str[j][i]);
            }
        }
        //cout<<endl;
    }
    cout<<ans;
}
