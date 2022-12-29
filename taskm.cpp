#include<iostream>
using namespace std;
main(){
int userdata;
int mod;
int mod1;
int mod2;
int mod3;
int add;
int multiply;
int total;
cout<<"enter 4 digit number:";
cin>>userdata;
mod=userdata%10;
userdata=userdata/10;
mod1=userdata%10;
userdata=userdata/10;
mod2=userdata%10;
userdata=userdata/10;
mod3=userdata%10;
userdata=userdata/10;
add=mod3+mod1;
multiply=mod*mod2;
total=add+multiply;
cout<<"the total is:"<<total;
}
