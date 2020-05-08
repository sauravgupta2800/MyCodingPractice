#include<bits/stdc++.h>
using namespace std;
int optsent[5];
int TRACK[5];
struct Node
{
    int authkey=80;
    int read()
    {
        return authkey;
    }
    void write(int key)
    {
        authkey=key;
    }

};
bool validate(int a,int b)
{
    return (a+b)==100;
}
int generate_new_OTP()
{
    srand (time(NULL));
    return rand()%100 + 1;
}
int main()
{
    int total_checkpoints=5;
    int check=0;
    Node n;
    while(check++ < total_checkpoints)
    {
        int otp;
        cout<<"\n______ORDERED REACHED AT CHECKPOINT____: "<<check<<endl;
        cout<<"\n Your Authentication key is: "<<n.read()<<"\n\n";
        while(1)
        {
            cout<<"Please Enter the OTP to registered as succesfull Pick-up: ";
            cin>>otp;
            if(validate(otp,n.authkey))
            {
                cout<<"You are done !!!"<<endl;;
                TRACK[check-1]=1;
                cout<<generate_new_OTP()<<endl;
                optsent[check-1]=generate_new_OTP();
                n.write(100-optsent[check-1]);
                break;
            }
            else
            {
                cout<<"\n!!!!!!!   VALIDATION FAILED   !!!!!!!\n";
                cout<<"\n!!!!!!!      TRY ONCE          !!!!!!!\n";
            }
        }
        cout<<"=============================================================\n";
        cout<<"\n\n";
    }

}
