#include<iostream>
using namespace std;
int symertrychk(int number);
int main()
{
    int num;
    cout<<"Enter 3 digit number :"<< endl;
    cin>>num;
    if(num<100 ||num>999){
        cout<<"Plz enter 3 digit number only ";

    }
    int result;
    result=symertrychk(num);

    if (result == 1)


    cout<<"the result is symmetrical :"<<endl;
    else if(result == 2)
    cout<<"the result is un symmetrical :"<<endl;
    return 0;
}
int symertrychk(int number)
{
    int first=number/100;
    int last=number%10;
    if (first==last)
    return 1;
    else 
    return 2;
    
}
