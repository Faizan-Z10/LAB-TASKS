#include<iostream>
using namespace std;
int main(){
    cout<<"enter number=";
    int num;
    cin>>num;
    if(num<0){
        cout<<"enter correct number";
    }else{
        cout<<"enter your table limit=";
        int lmt;
        cin>>lmt;
        if(lmt<=20){
        for(int i=0;i<=lmt;i++){
            cout<<i*num<<endl;
        }}
        else{
            cout<<"maximum limit is 20"<<endl;
        }
    }

    return 0;

}