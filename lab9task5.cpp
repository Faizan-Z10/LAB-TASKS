#include<iostream>
using namespace std;
int main(){
     float nu1, nu2, result;
     char ope;
     cout<<"enter Number = ";
     cin>>nu1;
     cout<<"enter operator = ";
     cin>>ope;
    cout<<"enter Number = ";
     cin>>nu2;
     switch(ope) 
     {
        case '+' :
        result = nu1 + nu2;
        cout<<nu1<<"+"<<nu2<<" = "<<result;
        break;
        case '-' :
        result = nu1 + nu2;
        cout<<nu1<<"-"<<nu2<<" = "<<result;
        break;
        case '/' :
        result = nu1 / nu2;
        cout<<nu1<<"/"<<nu2<<" = "<<result;
        break;
        case '*' :
        result = nu1 * nu2;
        cout<<nu1<<"x"<<nu2<<" = "<<result;
        break;
     }

    return 0;
}