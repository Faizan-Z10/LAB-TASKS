#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter 3 numbers = ";
     cin>>a>>b>>c;
        if(a>b && a>c){
            cout<<"1st number is larger";
        }
        else if (b>a && b>c){
            cout<<"2nd number is larger";
        } 
        else if(c>a && c>b) {
            cout<<"3rd number is larger";
        }else if ( a==b==c){
            cout<<"all number are equal";
        }else{
            cout<<"error";
        }

     return 0;
     
}