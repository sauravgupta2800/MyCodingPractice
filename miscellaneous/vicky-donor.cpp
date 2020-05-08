#include<bits/stdc++.h>
using namespace std;
int return_n(int c)
{
    return ceil((-1+sqrt(1+(8*c)))/2.0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(return_n(x)%n==0)
        {
            cout<<return_n(x)/n<<endl;
        }
        else
            cout<<return_n(x)%n<<endl;
    }
}
