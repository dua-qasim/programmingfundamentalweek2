#include<iostream>
using namespace std;
main()
{
cout<<"enter your name :";
string name;
cin>>name;
cout<<"enter matriculation marks  out of 1100 :";
int matriculationmarks;
cin>>matriculationmarks;
cout<<"enter intermediate marks out of 550 :";
int intermediatemarks;
cin>>intermediatemarks;
cout<<"enter ecat marks out of 400 :";
int ecatmarks;
cin>>ecatmarks;
int aggregate;
aggregate=((0.30*ecatmarks/400)+(0.45*intermediatemarks/550)+(0.25*matriculationmarks/1100)) *100;
cout<<"aggregate is" <<aggregate<<"%" ;
}
