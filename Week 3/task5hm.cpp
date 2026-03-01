#include<iostream>
using namespace std;
main()
{
cout<<" enter name of person :";
string person;
cin>>person;
cout<<" enter target weight loss in kilograms :";
float kilograms;
cin>>kilograms;
float days;
days=kilograms*15;
cout<<person<<"needs"<<days<<"days to lose"<<kilograms<<"kilograms" ;
}