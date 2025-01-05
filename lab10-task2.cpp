#include<iostream>
using namespace std;
int main() {

    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;
    cout<<"enter your marks of 1st and 2nd year="<<endl;
    int marks1,marks2;
    cin>>marks1;
    cin>>marks2;
    float ave= marks1+marks2;
     ave= ave/1100;
     ave= ave*100;
     cout<<"ave is="<<ave<<endl;
    if(ave<60){
        cout<<"your are not eligible"<<endl;
    }
    else if(ave>60 && ave<75){
        cout<<"enter your SAT score="<<endl;
        int SAT;
        cin>>SAT;
        if(SAT>1200){
            cout<<"you passed sat and you are eligible to apply"<<endl;
        }
        else{
            cout<<"your sat is not passed and you are not eligible to apply"<<endl;
        }
        }
    else if(ave>75){
        cout<<"you are eligible to apply and sat is optional"<<endl;

    }  
     return 0;
    }

    