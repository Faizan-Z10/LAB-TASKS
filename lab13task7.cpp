#include<iostream>
using namespace std;
int main(){

    int number, count=0;
    cout<<"enter your number=";
    cin>>number;
    for( int i=0;i<=number;i++){
        if(i%3==0){
            count++;
        }
        cout<<"numbers which are divisible by 3 are ="<<count<<endl;

    }


return 0; 
    }