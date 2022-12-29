#include<iostream>
using namespace std;
main(){
int initialvelocity;
int acceleration;
int time;
int finalvelocity;
cout<<"enter initial velocity";
cin>>initialvelocity;
cout<<"enter acceleration:";
cin>>acceleration;
cout<<"enter time:";
cin>>time;
cout<<"enter final velocity:";
cin>>finalvelocity;
finalvelocity=(acceleration * time) + initialvelocity;
cout<<"the final velocity is:"<<finalvelocity;
}