#include<iostream>
using namespace std;
main()
{
cout<<"enter a 4 digit code";
int num;
cin>> num;
int d1;
d1=num % 10;
num=num/10;
int d2;
d2=num % 10;
num=num/10;
int d3;

d3=num % 10;
num=num/10;
int d4;

d4=num%10;
int sum;
sum=d1+d2+d3+d4;
cout<<"sum is"<<sum;
}