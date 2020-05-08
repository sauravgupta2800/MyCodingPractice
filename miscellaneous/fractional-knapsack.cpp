#include<bits/stdc++.h>
using namespace std;

struct ITEM
{
    double value,weight;
    ITEM(){}
    ITEM(double value,double weight):value(value),weight(weight)
    {}
};

//comparator
bool cmp(struct ITEM a,struct ITEM b)
{
    double c1=double(a.value/a.weight);
    double c2=double(b.value/b.weight);
    return c1>c2;
}

double knapsack(long long W,struct ITEM arr[],long long n)
{
    sort(arr,arr+n,cmp);
    double curWeight = 0.0;  // Current weight in knapsack
     double finalvalue = 0.0; // Result (value in Knapsack)

   // Looping through all Items
   for (long long i = 0; i < n; i++)
   {
       // If adding Item won't overflow, add it completely
       if (curWeight + arr[i].weight <= W)
       {
           curWeight += arr[i].weight;
           finalvalue += arr[i].value;
       }

       // If we can't add current Item, add fractional part of it
       else
       {
           long long remain = W - curWeight;
           finalvalue += arr[i].value * ((double) remain / arr[i].weight);
           break;
       }
   }
   return finalvalue;
}
int main()
{
    long long n,W,i;
    cin>>n>>W;
    double arr[2][n];
    for(i=0;i<n;i++)
    {
        cin>>arr[0][i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[1][i];
    }
    //int W = 10;   //    Weight of knapsack
    struct ITEM object[n];
    for(int i=0;i<n;i++)
    {
        object[i].value=arr[0][i];
        object[i].weight=arr[1][i];
    }
    cout<<int(knapsack(W,object,n))<<endl;
    return 0;
}
