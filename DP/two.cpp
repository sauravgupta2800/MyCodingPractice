#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;

/*
2
9
UryYbPuRs
22
JrYpBzr gb UnPxvAt 552
*/
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        long long ev;
        cin>>ev;
        cin.ignore();
        getline(cin,s);
        for(long long i=0;i<ev;i++)
        {
            if(s[i]==' ')
                continue;
            else
            {
                //number
                if(s[i]>='0' && s[i]<='9')
                {
                    int pos=(s[i]-'0');
                    if(pos<=4)
                        s[i]=char(pos+'0'+5);
                    else
                        s[i]=char(pos+'0'-5);
                }
                else
                {
                    if(s[i]>='a' && s[i]<='z')
                    {
                        int pos=(s[i]-'a');
                        if(pos<=12)
                            s[i]=char(pos+'a'+13);
                        else
                            s[i]=char(pos+'a'-13);
                    }
                    else if(s[i]>='A' && s[i]<='Z')
                    {
                        int pos=(s[i]-'A');
                        if(pos<=12)
                            s[i]=char(pos+'A'+13);
                        else
                            s[i]=char(pos+'A'-13);
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}
