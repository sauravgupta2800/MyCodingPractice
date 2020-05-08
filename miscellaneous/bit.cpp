#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool at_pos(int num,int pos)
{
    bool bit =num&(1<<pos);
    return bit;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,k,pos=1;
        cin>>n>>k;
        pos=1<<31;
        bool bit;
        int c=0,LOC=0,sum=0,i;
        bool FOUND=false;
        for(int i=0;i<32;i++)
        {

            bit =n &(pos);
            if(bit)
            {
                if(k==1)
                {
                    LOC=i-1;
                    break;
                }
                // 1 is found
                // reset that bit
                n=n&(~(pos));
                //cout<<n<<endl;
                c++;
                if(c==k-1)
                {
                    LOC=i;
                    break;
                }
            }
            pos=pos>>1;
        }
        //cout<<LOC<<endl;
        pos=1<<31;
        pos=(pos>>LOC);

        pos=1;
        for(i=31;i>LOC;i--)
        {
            bit =n &(pos);
            if(bit)
            {
                // 1 is found
                // reset that bit
                n=n&(~(pos));
                sum+=pow(2,31-i);
                //cout<<sum<<" ";
                /*if(31-i==0)
                {
                    sum+=1;
                }
                else
                {
                    sum+=int(2<<(31-i-1));
                }*/
            }
            pos=pos<<1;
        }
        //cout<<LOC<<endl;
        int psum=pow(2,30-LOC);//2<<(30-LOC-1);
        //cout<<"SUM:"<<sum<<endl;
        //cout<<"PSUM:"<<psum<<endl;
        cout<<abs(psum-sum)<<endl;
    }

}
