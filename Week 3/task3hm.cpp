#include<iostream>
using namespace std;
main()
{
cout<<"enter initial veloity in metre per second :";
int initialvelocity;
cin>>initialvelocity;
cout<<"enter acceleration in metre per second square :";
int acceleration;
cin>>acceleration;
cout<<"enter time in second :";
int time;
cin>>time;
int finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;
cout<<"finalvelocity is"<<finalvelocity<<"in metre per second";
}

