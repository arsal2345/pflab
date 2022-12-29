#include<iostream>
using namespace std;
main(){
string moviename;
int adultticketprice;
int childticketprice;
int adultticketsold;
int childticketsold;
cout<<"enter movie name:";
cin>>moviename;
cout<<"enter price of adult ticket:";
cin>>adultticketprice;
cout<<"enter price of child ticket:";
cin>>childticketprice;
cout<<"enter number of adult tickets sold:";
cin>>adultticketsold;
cout<<"enter number of child tickets sold :";
cin>>childticketsold;
int donatepercentage;
cout<<"enter percentage to donate:";
cin>>donatepercentage;
int amountgenerated;
int amountafterdonation;
amountgenerated=(adultticketprice * adultticketsold) +(childticketprice * childticketsold);
cout<<"total amount generated:"<<amountgenerated<<endl;
donatepercentage=(amountgenerated * 0.1);
amountafterdonation=amountgenerated - donatepercentage;
cout<<"amount after donation:"<<amountafterdonation;
}