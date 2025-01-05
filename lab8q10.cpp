#include<iostream>
using namespace std;
int main(){
    int n,n1,n2,n3,n4,rem,sum;
    cout<<"enter 4 digit nnumber ="<<endl;
    cin>>n;
    n4=n%10;
    rem=n/10;
    n3=rem%10;
    rem=rem/10;
    n2=rem%10;
    n1=rem/10;
    sum=n1+n2+n3+n4;
    cout<<"sum is ="<<sum<<endl;
    

    return 0;
}