#include<iostream>
using namespace std;
main()
{
cout<< "enter your bill :";
 float bill;
 cin>>bill;
 float discountedbill;
 if(bill<=5000){
    discountedbill=bill-(bill * 0.05);

 }
 else{
    discountedbill =bill-(bill * 0.10); 
 }
 cout<<"discountedbill is"<< discountedbill;
}
