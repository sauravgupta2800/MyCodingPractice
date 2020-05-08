#include<bits/stdc++.h>
using namespace std;

int max_area(int arr[],int n)
{
    stack<int> s;
    int max_area=0,curr_area,i=0;
    while(i<n)
    {
        if(s.empty()==true||arr[s.top()]<=arr[i])
            s.push(i++);
        else
        {
            int top_index=s.top();
            s.pop();

            //calulate area
            curr_area=arr[top_index]*(s.empty()?i:i-s.top()-1);

            if(max_area<curr_area)
                max_area=curr_area;
        }
    }
    while(!s.empty())
    {
        int top_index=s.top();
        s.pop();

        //calulate area
        curr_area=arr[top_index]*(s.empty()?i:i-s.top()-1);

        if(max_area<curr_area)
            max_area=curr_area;
    }

    return max_area;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_area(arr,n);
}
