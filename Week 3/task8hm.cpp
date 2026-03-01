#include<iostream>
using namespace std;
main()
{
cout<<"enter vegetable price per kilogram in coins :";

float vegetableprice;

cin>>vegetableprice;

cout<<"enter fruit price per kilogram in coins :";

float fruitprice;

cin>>fruitprice;

cout<<"enter total kilograms of vegetable :";

int vegetableweight;

cin>>vegetableweight;

cout<<"enter total kilograms of fruits :";

int fruitweight;

cin>>fruitweight;

float rupee=1.94;

float totalearning;
totalearning =((vegetableprice * vegetableweight)+(fruitprice * fruitweight))/rupee;

cout<<"total earning is "<<totalearning<<"in rupees"<<rupee;
}