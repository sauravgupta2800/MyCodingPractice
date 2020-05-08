#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        getline(cin,str);
        int res=0;
        istringstream ss(str);
        do {
            string word;
            ss >> word;
            cout<<word<<endl;
            if(word=="not")
            {
                res=1;
                break;
            }
        } while (ss);

        if(res)
            cout<<"Real Fancy\n";
        else
            cout<<"regularly fancy\n";
    }
}
