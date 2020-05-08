#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    vector<string> r={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int num=1;
    string res;
    while(num)
    {
        for(int i=n.size()-1;i>=0;i--)
        {
            if(n[i]<=num)
            {
                res+=r[i];
                num-=n[i];
                break;
            }
        }
    }
    cout<<res;
}
