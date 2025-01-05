#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter 3 sides of triangle = ";
     cin>>a>>b>>c;
     if(a+b>c && a+c>b && b+c>a){
        if(a==b&&c==a&&b==c){
            cout<<"triangle is equilaterial";
        }
        else if (a==c||c==b||b==a){
            cout<<"triangle is isoceles";
        } 
        else {
            cout<<"triangle is scalene";
        }

     } else {
        cout<<"enter correct values";
     }
     
}