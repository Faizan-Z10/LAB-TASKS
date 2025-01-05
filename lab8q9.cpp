#include<iostream>
using namespace std;
int main(){
    
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15;
    int sum5, mul5,sub5,add2,sub3;
    cout<<"Enter 15 numbers in order "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num4;
    cin>>num3;
    cin>>num5;
    cin>>num6;
    cin>>num7;
    cin>>num8;
    cin>>num9;
    cin>>num10;
    cin>>num11;
    cin>>num12;
    cin>>num13;
    cin>>num14;
    cin>>num15;
    sum5=num1+num2+num3+num4+num5;
    mul5=num6*num7*num8*num9*num10;
    sub5=num11-num12-num13-num14-num15;
    add2=sum5+sub5;
    sub3=mul5-add2;
    cout<<"the result is="<<sub3;

    return 0;
}