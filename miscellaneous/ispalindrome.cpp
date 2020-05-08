#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            while(!isalnum(s[i]) && i<j)
                i++;
            while(!isalnum(s[j]) && i<j)
                j--;
            if(tolower(s[i])!=tolower(s[j]))
                return 0;
        /*    cout<<i<<" "<<j<<endl;
            cout<<tolower(s[i])<<" "<<tolower(s[j])<<endl;*/
            i++;
            j--;
        }
        return true;
    }
bool isp(string s)
{
    int i=0;
        int j=s.size()-1;
        while(i<j)
        {

            //skip nonaplhanum
            while(!isalnum(s[i]) && i<j)
                i++;
            while(!isalnum(s[j]) && i<j)
                j--;
            if(tolower(s[i]!=tolower(s[j])))
                return 0;
           // cout<<tolower(s[i])<<" "<<tolower(s[j]<<endl;
            i++;
            j--;
        }
        return true;
}
int main()
{
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    cout<<isp("A man, a plan, a canal: Panama");
}
