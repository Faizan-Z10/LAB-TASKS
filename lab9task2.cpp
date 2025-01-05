#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter number a"<<endl;
    cin>>n1;
    cout<<"enter number b"<<endl;
    cin>>n2;
    if(n1>n2){
        cout<<"Number a is greater than number b"<<endl;

    }
    else if(n1==n2) {
        cout<<"Number b is equal to a"<<endl;
    }
    else{
        cout<<"number b is greater than number a"<<endl;

    }
    return 0;
}