#include<iostream>
using namespace std;
main()
{
cout<<"enter weight of the fertilizer bag in pounds :";
int weight;
cin>>weight;
cout<<"enter cost of bag  :";
int bag;
cin>>bag;
cout<<"enter size of area the bag can cover :";
int size;
cin>>size;
float unitprice;
unitprice=bag/weight;
float squarefootprice;
squarefootprice=unitprice/size;
cout<<"price of the fertilizer is "<<unitprice<<"cost of using fertilizer for each square foot of the garden"<<squarefootprice;
}



