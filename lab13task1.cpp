#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,n3,n4,n5,rem,sum,reverse;
    cout<<"enter 5 digit nnumber ="<<endl;
    cin>>n;
    if(n <= 99999){
    n5=n%10;
    rem=n/10;
    n4=rem%10;
    rem=rem/10;
    n3=rem%10;
    rem=rem/10;
    n2=rem%10;
    n1=rem/10;
    sum=n1+n2+n3+n4+n5;
    cout<<"sum is ="<<sum<<endl;
    cout<<"reverse is="<<n5<<n4<<n3<<n2<<n1<<endl;
    }
    else{
        cout<<"enter valid number with 5 digits only "<<endl;
    }

    return 0;
}