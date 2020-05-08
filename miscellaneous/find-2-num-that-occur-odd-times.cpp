/*
Find 2 number in unsorted array which occur 2 times
Steps:
1. xor all elements
2. Find rightmost set bits
(set bit means x and y are different group)
3. divide into 2 group 1 whose has set bitsand 2nd who has non set value
xor all items and you got result;
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9};
    int xor1=v[0];
    int i;
    for(i=1;i<v.size();i++)
    {
        xor1=xor1^v[i];
    }
    //find right most set bit;
    int right_set_bit=xor1 & ~(xor1-1);
    int x=0,y=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]&right_set_bit)
        {
            x=x^v[i];
        }
        else
        {
            y=y^v[i];
        }
    }
    cout<<x<<" "<<y<<endl;

}
