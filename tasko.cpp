#include<iostream>
using namespace std;
main(){
int totalmarks;
int student1marks;
int student2marks;
int student3marks;
int Average;
cout<<"Enter total marks:";
cin>>totalmarks;
cout<<"Enter student 1 marks:";
cin>>student1marks;
cout<<"Enter student 2 marks:";
cin>>student2marks;
cout<<"Enter student 3 marks:";
cin>>student3marks;
Average=(student1marks+student2marks+student3marks)/totalmarks;
cout<<"average marks="<<Average;
}