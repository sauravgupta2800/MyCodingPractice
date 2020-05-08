#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<vector<int>> v,int x1,int y1,int x2,int y2)
{
    vector<int> item;
    while(y2>=y1)
    {
        item.push_back(v[x2][y2]);
        y2--;
        x2++;
    }
    return item;
}
int main()
{
    vector<vector<int>> res,v={{1,2,3},{4,5,6},{7,8,9}};
    //vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int X1=0,Y1=0,X2=0,Y2=0;
    int size=3;
    vector<int> row;
    while(X1<size)
    {
        res.push_back(fun(v,X1,Y1,X2,Y2));
        X1++;
        Y2++;
    }
    X1--;
    Y2--;
    Y1++;
    X2++;
    while(Y1<size)
    {
        res.push_back(fun(v,X1,Y1,X2,Y2));
        Y1++;
        X2++;
    }

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
