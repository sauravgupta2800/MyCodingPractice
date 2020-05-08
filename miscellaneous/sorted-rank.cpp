#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n<=1)?1:n*fact(n-1);
}

int countReturn(string str,int low,int high)
{
    int i,count=0;
    for(i=low+1;i<=high;i++)
    {
        if(str[i]<str[low])
            count++;
    }
    return count;
}
int main()
{
    string str="DTNGJPURFHYEW";
    int len=str.length();
    int mul=fact(len);
    int rank=1;
    int count;
    int i;
    for(i=0;i<len;i++)
    {
        mul=mul/(len-i);
        count=countReturn(str,i,len-1);
        rank+=(count%1000003*mul%1000003)%1000003;
    }
    cout<<rank;
}
