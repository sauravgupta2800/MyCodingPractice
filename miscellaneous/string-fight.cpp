#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,res=0,count,item;
        cin>>count>>item;
        string str;
        cin>>str;

        //map<pair<int,int>,int>;
        for(i=0;i<str.size();i++)
        {
            int c=0;
            for(j=i;j<str.size();j++)
            {
                //cout<<str[j];
                if((str[j]-'0')==item)
                {
                    //cout<<"j";
                    c++;
                }
                if(count==c)
                {
                    res++;
                    //cout<<"RES:"<<res<<endl;
                }
                if(c>count)
                    break;
            }
            //cout<<endl;
        }
        cout<<res<<endl;
    }
}
