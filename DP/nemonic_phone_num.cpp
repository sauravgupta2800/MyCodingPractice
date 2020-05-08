#include<bits/stdc++.h>
using namespace std;
const array<string,10> mp={{"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}};
void fun(int i,string str,string curr,std::vector<string> &res)
{
    if(i==str.size())
    {
        res.push_back(curr);
        return;
    }
    for(char c: mp[str[i]-'0'])
    {
        curr.push_back(c);
        fun(i+1,str,curr,res);
        curr.pop_back();
    }
}
int main()
{
    string str="23";
    vector< string > res;
    fun(0,str,"",res);
}
