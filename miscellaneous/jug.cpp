#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n=1000000,k=5;
    std::string bin = std::bitset<32>(n).to_string();
    cout<<bin<<endl;
    int c=0,POS=0,i;
    int in=0;
    for(int i=0;i<32;i++)
    {
        if(bin[i]=='1')
        {
            cout<<"j";
            c++;
        }
    }

    if(c<=k)
    {
        cout<<"j";
        cout<<0<<endl;
        return 0;
    }

    c=0;
    for(int i=0;i<32;i++)
    {
        if(bin[i]=='1')
        {
            if(k==1)
            {
                POS=i-1;
                break;
            }
            c++;
            if(c==k-1)
            {
                POS=i;
                in=1;
                break;
            }
        }
    }

    int mul=0,sum=0,ct=0;
    for(i=31;i>POS;i--)
    {
        if(bin[i]=='1')
        {
            ct++;
            sum+=pow(2,mul);
        }
        mul++;
        //cout<<bin[i]<<" ";
    }

    if(ct==1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<pow(2,31-POS)-sum<<endl;
    }

    //cout<<sum<<endl;
    //cout<<pow(2,31-POS)<<endl;
    /*string s=bin.substr(pos,32-pos+1);
    cout<<s<<endl;
    cout<<binaryToDecimal(s)<<endl;
    cout<<pow(2,32-pos)<<endl;
    cout<<pow(2,32-pos)-binaryToDecimal(s)<<endl;
    */

}
