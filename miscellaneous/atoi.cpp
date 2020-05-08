
#include<bits/stdc++.h>
using namespace std;
int myAtoi(string str) {
       int i=0;
       while(str[i]==' ')
           i++;
       int sign=1;
       if(str[i]=='-')
       {
           sign=-1;
           i++;
       }
       long long res=0;
       while(str[i]>='0' && str[i]<='9')
       {
           if(res>=INT_MAX/10)
           {
               if(sign==1)
                   return INT_MAX;
               return INT_MIN;
           }
           res=res*10+(str[i]-'0');
           i++;
           //check overflow
           if(res>=INT_MAX)
           {
               if(sign==1)
                   return INT_MAX;
               return INT_MIN;
           }
       }
       return sign*res;
 }
void atoi(string str,int b1,int b2)
{
    bool isneg=str.front()=='-1';
    int res=0;
    for(int i=(isneg==true)?1:0;i<str.size();i++)
    {
        res=res*b1;
        res+=isdigit(str[i])?str[i]-'0':str[i]-'A'+10;
    }
    string ans;
    do {
        int r=res%b2;
        ans.push_back(r>=10?'A'+r-10:'0'+r);
        res/=b2;

    } while(res);
    if(isneg)
    {
        ans.push_back('-');
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
 int main()
 {
     atoi("615",7,2);
 }
