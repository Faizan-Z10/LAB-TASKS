#include<iostream>
using namespace std;
int main(){

    int bid1,bid2,bid3,bid4,bid5;
    cout<<"enter 5 bids"<<endl;
    cin>>bid1;
    cin>>bid2;
    cin>>bid3;
    cin>>bid4;
    cin>>bid5;
    if(bid1>bid2 && bid1>bid4 && bid1>bid3 && bid1>bid5){
        cout<<"bid 1 is bigger";
    }
    else if(bid2>bid1 && bid2>bid4 && bid2>bid3 && bid2>bid5){
        cout<<"bid 2 is bigger";
    }else if(bid3>bid1 && bid3>bid4 && bid3>bid2 && bid3>bid5){
        cout<<"bid 3 is bigger";
    }else if(bid4>bid1 && bid4>bid3 && bid4>bid2 && bid4>bid5){
        cout<<"bid 4 is bigger";
    }else{
        cout<<"bid 5 is bigger";
    }

    return 0;
}