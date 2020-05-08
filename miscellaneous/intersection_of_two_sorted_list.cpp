#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,3,4,5,6};
    vector<int> v2={3,5};

    /*sort(v1.begin(),v1.end());
    v1.erase(unique(v1.begin(),v1.end()),v1.end());
    int n1=v1.size();
    for(int i=0;i<n1;i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    sort(v2.begin(),v2.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    int n2=v2.size();
    for(int i=0;i<n2;i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    */
    int n1=v1.size(),n2=v2.size();

    int i=0,j=0;
    vector<int> res;
    while(i<n1 && j<n2)
    {
        if(v1[i]==v2[j])
        {
            res.push_back(v1[i]);
            i++;j++;
        }
        else if(v1[i]<v2[j])
            i++;
        else
            j++;
    }
    for(i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
