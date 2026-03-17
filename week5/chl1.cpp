#include<iostream>
using namespace std;
main(){

int num1,num2,i=1,hcf=1,lcm;
cout<<"enter first number :";
cin>> num1;
cout<<"enter secnd number:";
cin>>num2;
while(i<=num1 && i<=num2)
{


    if(num1% i==0 && num2% i==0)
        {hcf=i;}
        i=i+1;
    
}

lcm=(num1*num2)/hcf;
cout<<"hcf :"<<hcf<<endl;
cout<<"lcm :"<<lcm<<endl;
}