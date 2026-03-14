#include<iostream>
using namespace std;
main()
{
    cout<<"enter country name";
 string name;
 cin>>name;
 cout<<"ticket price in dollars";

int price;
int disprice;
cin>>price;
 if(name == "ireland"){

disprice=price -(price*0.10);
 }
else{

    disprice=price-( price*0.05);
    
}

cout<<"discounted price :"<< disprice;


}