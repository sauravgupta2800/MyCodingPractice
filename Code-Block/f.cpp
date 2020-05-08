#include<bits/stdc++.h>
using namespace std;
vector<string> days{"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
void fun(int dd,int mm,int yy)
{
    vector<int> months={0,3,0,3,2,3,2,3,3,2,3,2,3};
    int year,y;
    int odd=0;
    int leap,non_leap;
    int sum=0;
    if(yy<2000)
    {
        year=yy-1900;
        y=year-1;
        odd=1;
        leap=y/4;
        non_leap=y-leap;
        sum+=odd;
        sum+=(2*leap);// adding leap years
        sum+=non_leap; // adding non-leap years
        sum+=dd;      // adding days

        for(int mahina=1;mahina<mm;mahina++)// adding months
        {
            if(mahina==2)
            {
                if(year%4==0)//non_leap
                {
                    sum+=1;
                }
            }
            else
            {
                sum+=months[mahina];
            }
        }
        cout<<days[sum%7]<<endl;
    }
    else if(yy>2000 && yy<2100)
    {
        year=yy-2000;
        y=year-1;
        leap=y/4;
        non_leap=y-leap;
        sum+=odd;
        sum+=(2*leap);// adding leap years
        sum+=non_leap; // adding non-leap years
        sum+=dd;      // adding days

        for(int mahina=1;mahina<mm;mahina++)// adding months
        {
            if(mahina==2)
            {
                if(year%4==0)//non_leap
                {
                    sum+=1;
                }
            }
            else
            {
                sum+=months[mahina];
            }
        }
        cout<<days[sum%7]<<endl;
    }
    else if(yy==2000)
    {
        year=yy;
        odd=5;
        sum+=odd; // adding non-leap years
        sum+=dd;      // adding days

        for(int mahina=1;mahina<mm;mahina++)// adding months
        {
            if(mahina==2)
            {
                if( year%4==0)//non_leap
                {
                    sum+=1;
                }
            }
            else
            {
                sum+=months[mahina];
            }
        }
        cout<<days[sum%7]<<endl;
    }
    else if(yy==2100)
    {
        year=yy;
        odd=4;
        sum+=odd; // adding non-leap years
        sum+=dd;      // adding days

        for(int mahina=1;mahina<mm;mahina++)// adding months
        {
            if(mahina==2)
            {
                if(year%100!=0 &&year%4==0)//non_leap
                {
                    sum+=1;
                }
            }
            else
            {
                sum+=months[mahina];
            }
        }
        cout<<days[sum%7]<<endl;
    }
}

int f(int A)
{
    int arr[A+1];
    for(int i=0;i<=A;i++)
        arr[i]=0;
    for(int i=1;i<=A;i++)
    {
        for(int j=i;j<=A;j+=i)
        {
            arr[j]=(arr[j]==0?1:0);
        }
    }
    int c=0;
    for(int i=1;i<=A;i++)
    {
        if(arr[i]==1)
            c++;
    }
    return c;
}


/*---------------------------------------------*/
int factorial(int n)
{
    int i=0,ans=1;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
        ans=ans%1000003;
    }
    return ans;
}
void funt(string str)
{
    int n=str.size();
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i;j<n;j++)
        {
            if(str[i]>str[j])
                c++;
        }
       v.push_back(c);
       cout<<"C: "<<c<<endl;
    }
    int i=v.size()-1;
    int j=0;

    int ans=0;
    while(i>=0)
    {
        ans+=v[i]*factorial(j);
        ans=ans%1000003;
        j++;
        i--;
    }
    cout<<ans+1<<endl;

}
int main()
{
    funt("SPAIN");
}
