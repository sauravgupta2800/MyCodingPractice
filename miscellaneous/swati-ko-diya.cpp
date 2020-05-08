#include<bits/stdc++.h>
using namespace std;

/*
POINTS:

1. argument ko default hamesha last
   se lagana shuru krte hai
2. maine sabhi ko default value isliye di
    hai taaki vo sabhi argument ke liye run kre.
    jab 1 argument miss ko tab bhi jab 2 miss ko
    tab bhi jab saare miss ho tab bhi..
*/
int average_of_3_CAs(int m1=0,int m2=0,int m3=0)
{
    int average=(m1+m2+m3)/3;
    return average;
}

int BEST_TWO(int m1=0,int m2=0,int m3=0)
{
    // best two means total-(minimum score)
    int least_sub_score=0;
    if(m1<m2 && m1<m3)// m1 is less than both m2 and m2
        least_sub_score=m1;// than least score is m1
    else if(m2<m1 && m2<m3)
        least_sub_score=m2;
    else
        least_sub_score=m3;
    //cout<<"Least sub marks is: "<<least_sub_score<<endl;

    int total_marks=m1+m2+m3;
    //cout<<"total sub marks is: "<<total_marks<<endl;

    //cout<<total_marks-least_sub_score<<endl;
    return total_marks - least_sub_score;
}

int main()
{
    cout<<average_of_3_CAs(10,20,30)<<endl;// (10+20+30)/3 =20
    cout<<average_of_3_CAs(10,20)<<endl; // (10+20+0)/3 =10
    cout<<average_of_3_CAs(10)<<endl;// (10+0+0)/3 = 3(integer value)
    cout<<average_of_3_CAs()<<endl;// (0+0+0)/3 =0

    cout<<"BEST_TWO_SUB_MARKS_ARE: "<<BEST_TWO(10,20,30)<<endl;
}
