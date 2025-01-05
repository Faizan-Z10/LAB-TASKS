#include<iostream>
using namespace std;
int main(){
    float att;
    cout<<"enter your total attendance="<<endl;
    cin>>att;
    att=att/155;
    att=att*100;
    cout<<"your attendance is"<<att;
    cout<<"\nenter your marks="<<endl;
    int marks;
    cin>>marks;
    if(marks>85){
        cout<<"your grade is A"<<endl;
    }
    else if( marks>80 && marks<84){
        cout<<" your garde is A-"<<endl;
    }
    else if(marks>70 && marks<79){
        cout<<" your grade B"<<endl;
    }
    else if(marks>60 && marks<69){
        cout<<" your grade c+"<<endl;
    }
    else if(marks>50 && marks<59){
        cout<<" your grade c-"<<endl;
    }
    else if(marks>40 && marks<49){
        cout<<" your grade f"<<endl;
    }
    else {
        cout<<"you are FAIL"<<endl;
    }
    return 0;
}