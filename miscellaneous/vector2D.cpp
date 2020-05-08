#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < vector<int> > vect{{1,2,3},{5,6,7},{77,88,43}};
    for(int i=0 ; i<vect.size();i++)
    {
        for(int j=0;j<vect[i].size();j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
}
