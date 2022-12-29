#include<iostream>
using namespace std;
main(){
float vegetablecoinsperkg;
cout<<"enter vegetable coins per kg:";
cin>>vegetablecoinsperkg;
float fruitcoinsperkg;
cout<<"enter fruit coins per kg:";
cin>>fruitcoinsperkg;
int kgofvegetable;
cout<<"total kgs of vegetable:";
cin>>kgofvegetable;
int kgoffruit;
cout<<"total kgs of fruit:";
cin>>kgoffruit;
float vegetablecost;
vegetablecost=vegetablecoinsperkg*kgofvegetable;
float fruitcost;
fruitcost=fruitcoinsperkg*kgoffruit;
int totalcost;
totalcost=vegetablecost+fruitcost;
cout<<"total is:"<<totalcost;
float result=totalcost*1.94;
cout<<"totalcost is:"<<result;
}