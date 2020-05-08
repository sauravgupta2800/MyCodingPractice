#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
        void f1()
        {
            cout<<"Base:1\n";
        }
        virtual void f2()
        {
            cout<<"Base:2\n";
        }
        virtual void f3()
        {
            cout<<"Base:3\n";
        }

};
class derived:public base
{
    public:
        void f1()
        {
            cout<<"derived:1\n";
        }
        void f2()
        {
            cout<<"derived:2\n";
        }
        void f3()
        {
            cout<<"derived:3\n";
        }

};
int main()
{

}
