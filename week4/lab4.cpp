#include<iostream>
using namespace std;
main()
{
    cout<<"number of red roses:";
    int num1;
    cin>>num1;
    cout<<"number of white roses:";
    int num2;
    cin>>num2;
    cout<<"number of tulips:";
    int num3;
    cin>>num3;
    float price1;
    price1=2.00 * num1 ;
    float price2;
    price2=4.10 * num2;
    float price3;
    price3=2.50 * num3;
    float total=price1+price2+price3;
    float dis;
    if(total>200){
        dis=total - total*0.20;
      cout<<"original price"<<total;
      cout<<"payable price "<<dis;
      

    }else{
        "program ends";
    }
}