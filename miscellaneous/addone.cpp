#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1, 1, 1, 3, 2, 1, 1, 2, 5, 9, 6, 5};
    int num=pow(10,v.size()),digit=1;
    for(int i=0;i<v.size();i++)
    {
        num/=10;
        digit+=v[i]*num;
    }
    vector<int> res;
    int r=0;
    while(digit)
    {
        res.push_back(digit%10);
        digit/=10;
    }
    int start=0;
    int end=res.size()-1;
    while(start<end)
    {
        swap(res[start],res[end]);
        start++;
        end--;
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}
