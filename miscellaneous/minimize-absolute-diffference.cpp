#include<bits/stdc++.h>
using namespace std;
int maxi(int m1,int m2,int m3)
{
    return max(m1,max(m2,m3));
}

int mini(int m1,int m2,int m3)
{
    return min(m1,min(m2,m3));
}

int main()
{
    vector<int> v1={1,4,5,8,10};
    vector<int> v2={6,9,15};
    vector<int> v3={2,3,6,6};

    int n1=v1.size(),n2=v2.size(),n3=v3.size();
    int i=0,j=0,k=0;
    int pos=0;
    int res=INT_MAX;


    while(i<n1 && j<n2 && k<n3)
    {
        res = min(res, (maxi(v1[i],v2[j],v3[k])-mini(v1[i],v2[j],v3[k])) );
        //cout<<"res: "<<res<<endl;
        if(v1[i]<=v2[j] && v1[i]<=v3[k])
            i++;
        else if(v2[j]<=v1[i] && v2[j]<=v3[k])
            j++;
        else
            k++;
    }
    cout<<res<<endl;
    // find max(a,b,c)-min(a,b,c)------should be minimum

}
