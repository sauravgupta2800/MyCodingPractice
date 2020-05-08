#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string str,str2;
        cin>>str;
        cin>>str2;
        // following code for extract only unique keys after sorting
        if(str.length()!=str2.length())
        {
            cout<<"NO\n";
        }
        else
        {
            sort(str.begin(),str.end());
            str.erase(unique(str.begin(),str.end()),str.end());

            sort(str2.begin(),str2.end());
            str2.erase(unique(str2.begin(),str2.end()),str2.end());
            if(str.length()>=str2.length())
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
