#include<iostream>
using namespace std;
int main(){
    
    float sizebg,area,coastperarea,coastperpound;
    int pkr;
    cout<<"enter size of fertilizer per pound="<<endl;
    cin>>sizebg;
    cout<<"enter the coast of bag in pkr"<<endl;
    cin>>pkr;
    cout<<"enter the area in square feet ="<<endl;
    cin>>area;
    coastperarea=area*pkr;
    coastperpound=sizebg*pkr;
    cout<<"The coast per pound="<<coastperpound<<"pkr"<<endl;
    cout<<"The coast of fertilizer per square foot="<<coastperarea<<"pkr"<<endl;
    

    return 0;
}