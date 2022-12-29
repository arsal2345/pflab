#include<iostream>
using namespace std;
main(){
int sizeofbag;
int costofbag;
int area;
int costperpound;
int costofarea;
int d;
cout<<"enter bag size in pounds:";
cin>>sizeofbag;
cout<<"enter cost of bag:";
cin>>costofbag; 
cout<<"enter area covered by each bag in square feet:";
cin>>area;
costperpound=costofbag/sizeofbag;
d=costofbag/costperpound;
costofarea=d*area;
cout<<costperpound<<endl;
cout<<costofarea;
}