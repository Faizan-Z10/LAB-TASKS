#include<iostream>
using namespace std;
int main(){
     float price ;
     cout<<"enter the price of product "<<endl;
     cin>>price;
     if(price>=5000){
        float disprice = (price*5)/100;
       float afterdisprice= price - disprice;
        cout<<"discount is ="<<afterdisprice;

     }else {
        float disprice=(price*10)/100;
        float afterdisprice= price - disprice;
        cout<<"discount is ="<<afterdisprice;
     }

    return 0;
}