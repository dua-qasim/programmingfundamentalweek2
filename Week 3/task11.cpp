#include<iostream>
using namespace std;
main()
{
cout<<"enter current world population :";
int population;
cin>>population;
cout<<"enter monthly birth rate : ";
int birthrate;
cin>>birthrate;
int futurepopulation=population+(birthrate * 360);
cout<<"population in three decades will be: "<<futurepopulation ;
}