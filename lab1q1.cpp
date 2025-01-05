#include<iostream>
using namespace std;

int userprofile(){
    int age;
    string name,address,email;
    float percentage;
    cout<<"enter your name="<<endl;
    cin>>name;
    cout<<"enter your age="<<endl;
    cin>>age;
    cout<<"enter your address="<<endl;
    cin>>address;
    cout<<"enter your percentage="<<endl;
    cin>>percentage;
    cout<<"enter your email="<<endl;
    cin>>email;
    cout<<"your name is="<<name<<endl;
    cout<<"your age is="<<age<<endl;
    cout<<"your address is="<<address<<endl;
    cout<<"your percentage is="<<percentage<<"%"<<endl;
    cout<<"your email is="<<email<<endl;
    return 0;

}
int main(){
    userprofile();
    return 0;
}