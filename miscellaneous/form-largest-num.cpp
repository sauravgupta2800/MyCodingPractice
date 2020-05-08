//form-largest-num.cpp
#include<bits/stdc++.h>
using namespace std;

int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);

    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}


int main()
{
    vector<string> arr;
    arr.push_back("1");
    arr.push_back("34");
    arr.push_back("3");
    arr.push_back("98");
    arr.push_back("9");
    arr.push_back("76");
    arr.push_back("45");
    arr.push_back("4");
    sort(arr.begin(), arr.end(), myCompare);

    string str;

    for (int i=0; i < arr.size() ; i++ )
        str+=arr[i];
    cout<<str;
}
