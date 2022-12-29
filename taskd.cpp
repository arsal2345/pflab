#include<iostream>
using namespace std;
main(){
string name;
cout<<"enter your name:";
cin>>name;
int subject1;
cout<<"enter subject 1 marks:";
cin>>subject1;
int subject2;
cout<<"enter subject 2 marks:";
cin>>subject2;
int subject3;
cout<<"enter subject 3 marks:";
cin>>subject3;
int subject4;
cout<<"enter subject 4 marks:";
cin>>subject4;
int subject5;
cout<<"enter subject 5 marks:";
cin>>subject5;
int totalmarks;
totalmarks=subject1 + subject2 + subject3 + subject4 + subject5;
float percentage;
percentage=(totalmarks * 100) / 500;
cout<<"the percentage is="<<percentage;
}

























;