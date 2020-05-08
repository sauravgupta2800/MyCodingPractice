#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int len=str.size();
        int i=0;
        len=len-1;
        int res=0;
        while(len>=0)
        {
            if(str[i++]=='1')
            {
                res+=pow(2,len);
            }
            len--;
        }
        cout<<res<<endl;
    }
}
