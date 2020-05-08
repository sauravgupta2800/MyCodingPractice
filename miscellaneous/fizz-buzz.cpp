#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,A=15;
    vector<string> str;
    for(i=1;i<=A;i++)
    {
        if(i%3==0 && i%5==0)
            str.push_back("FizzBuzz");
        else if(i%3==0)
            str.push_back("Fizz");
        else if(i%5==0)
            str.push_back("Buzz");
        else
            str.push_back(to_string(i));
    }
    for(i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
}
