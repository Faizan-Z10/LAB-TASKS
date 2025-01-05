#include<iostream>
using namespace std;
int main(){
    float sub1,sub2,sub3,sub4,sub5,per,sum;
    string stdnm;
    cout<<"Enter your name=";
    cin>>stdnm;
    cout<<"Enter Number of 1st subject out of 100 =";
    cin>>sub1;
    cout<<"Enter Number of 2nd subject out of 100 =";
    cin>>sub2;
    cout<<"Enter Number of 3rd subject out of 100 =";
    cin>>sub3;
    cout<<"Enter Number of 4th subject out of 100 =";
    cin>>sub4;
    cout<<"Enter Number of 5th subject out of 100 =";
    cin>>sub5;
    sum=sub1+sub2+sub3+sub4+sub5;
    per=(sum/500)*100;
    cout<<"Mr. / Miss."<<stdnm<<" your Percentage is ="<<per<<"%"<<endl;

    return 0;
}