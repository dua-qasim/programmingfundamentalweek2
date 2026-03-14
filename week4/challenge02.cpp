#include<iostream>
using namespace std;
main()
{
int salary;
salary=10000;
int laptopprice;
laptopprice=50000;
int advance;
advance=salary*6;
if(advance>=laptopprice)
{
    cout<<"ali will be able to buy laptop";

}
else{
    cout<<"ali cannot buy laptop";
    int month;
    month=laptopprice/salary;
    cout<<"month reqired to buy laptop"<<month;

}
}