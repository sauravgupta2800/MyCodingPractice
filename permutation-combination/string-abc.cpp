#include<bits/stdc++.h>
using namespace std;

int permutation(string str,int i)
{
    if(i==str.size())
    {
        cout<<str<<endl;
        return 0;
    }
    else
    {
        for(int j=i;j<str.size();j++)
        {
            swap(str[i],str[j]);
            permutation(str,i+1);
        }
    }
}
int main()
{
    permutation("abc",0);
}
