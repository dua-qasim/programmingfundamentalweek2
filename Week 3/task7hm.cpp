#include<iostream>
using namespace std;
main()
{
cout<<" enter name of the movie :";

string name;

cin>>name;

cout<<" enter price of adult ticket:"<<endl;

int adultticketprice ;

cin>>adultticketprice ;

cout<<" enter price of child ticket:"<<endl;

int childticketprice;

cin>>childticketprice;

cout<<" enter number of adult ticket sold:"<<endl;

int adultticketsold;

cin>>adultticketsold;

cout<<" enter number of child ticket sold;"<<endl;

int childticketsold;


cin>>childticketsold;

cout<<" enter percentage of total money to donate to charity :"<<endl;

int percentage;

cin>>percentage;

int totalmoney;

totalmoney=(adultticketprice * adultticketsold)+(childticketprice*childticketsold);

int charity;

charity=(percentage * totalmoney)/100;

int remainingmoney;

remainingmoney=totalmoney - charity;

cout<<"movie name is" <<name<<endl;
cout<<"total money is"<<totalmoney<<endl;
cout<<"charity iis "<<charity<<endl;
cout<<"remaining money is"<<remainingmoney;
}



