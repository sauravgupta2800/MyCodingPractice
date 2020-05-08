#include<bits/stdc++.h>
using namespace std;
int main()
{
    float one=INT_MAX,two=INT_MAX,three=INT_MAX;
    vector<string> str={"0.234022", "0.051717", "0.820402", "0.492629", "0.004825", "0.589073"};
    int i;
    vector<float> v;
    for(i=0;i<str.size();i++)
    {
        v.push_back(atof(str[i].c_str()));
    }
    int n=v.size();
    for(i=0;i<n;i++)
    {
        if(v[i]<=one)
        {
            three=two;
            two=one;
            one=v[i];
        }
        else if(v[i]<=two)
        {
            three=two;
            two=v[i];
        }
        else if(v[i]<=three)
        {
            three=v[i];
        }
    }
    cout<<one+two+three<<endl;
    if((one+two+three)<2)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }
}
