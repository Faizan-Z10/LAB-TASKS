#include<iostream>
using namespace std;
int main(){

    int batchnum,sum=0,digit;
    cout<<"enter batch number="<<endl;
    cin>>batchnum;
    while(batchnum>0){

        digit = batchnum % 10;
        sum  += digit;
        batchnum /= 10; 

    }

    cout<<"the sum of batch number is ="<<sum<<endl;
    if (sum % 3 == 0){
        cout<<"the batch number is divisible by 3";
    }
    else{
        cout<<"the batch number is not divisible by 3";
    }
    return 0;
}