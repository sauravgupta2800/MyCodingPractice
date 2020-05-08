#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={4, 15, 4, 4, 15, 18, 20 };
    //vector<int> v={1,4,7,3,10,48,17,26,30,45,50,62};
    int i,j;
    int n=v.size();
    int start=0;
    int end=v.size();
    for(i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            start=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(v[i-1]>v[i])
        {
            end=i;
            break;
        }
    }
    cout<<endl<<"indices: "<<start<<" "<<end<<"\n";
    vector<int> ret;
    if(start==0 && end==v.size())
    {
        ret.push_back(-1);
        //  return ret;
    }
    int mini=INT_MAX,maxi=INT_MIN;
    for(i=start;i<=end;i++)
    {
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    cout<<endl;
    cout<<mini<<maxi;

    int min_index=0;
    int max_index=n-1;
    for(i=0;i<=start;i++)
    {
        if(v[i]>mini)
        {
            min_index=i;
            break;
        }
    }
    for(j=n-1;j>=end;j--)
    {
        if(maxi>v[j])
        {
            max_index=j;
        }
    }
    cout<<min_index<<max_index;
    /*ret.push_back(min_index);
    ret.push_back(max_index);
    return ret;*/
}
