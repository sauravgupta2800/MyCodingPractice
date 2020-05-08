//C++ program to write and read object using read and write function.
#include <iostream>
#include <fstream>

using namespace std;
class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        {
            fflush(stdin);
            cout<<"Enter name:"; cin.getline(name,30);
            cout<<"Enter age:"; cin>>age;
        }
        void showData(void)
        {
            cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};

int main()
{
    student s1;
    ofstream file;
    file.open("aaa.txt",ios::out|ios::app);
    cout<<"\nFile created successfully."<<endl;
    s1.getData();
    file.write((char*)&s1,sizeof(s1));    //write into file
    file.close();
    cout<<"\nFile saved and closed succesfully."<<endl;
    ifstream file1;
    file1.read((char*)&s1,sizeof(s1));
    s1.showData();
    file1.close();
    return 0;
}
