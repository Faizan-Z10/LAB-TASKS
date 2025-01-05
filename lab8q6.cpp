#include<iostream>
using namespace std;
int main(){
     
     float init_velocity, acceleration, time, final_velocity;
    cout<<"Enter initial velocity of car="<<endl;
    cin>>init_velocity;
    cout<<"Enter acceleration of car="<<endl;
    cin>>acceleration;
    cout<<"Enter time taken by car to complete distance="<<endl;
    cin>>time;
    final_velocity=init_velocity+(acceleration*time);
    cout<<"Final Velocity of car is="<<final_velocity<<"km/h"<<endl;
    

    return 0;
}