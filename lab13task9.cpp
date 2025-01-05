#include<iostream>
using namespace std;
int main(){

    int num,sum=0;
    cout<<"enter your number"<<endl;
    cin>>num;
    if(num<0){
        cout<<" please enter valid number"<<endl;
    }else{

        for(int i=0;i<=num;i++){
            if(i % 2 ==0){
                sum += i;
            }
        }
    cout<<"sum of all odd number between the number 1 to  "<<num<<"  is ="<<sum<<endl;

    }


    return 0;

}
