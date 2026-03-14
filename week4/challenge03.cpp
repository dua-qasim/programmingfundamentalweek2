#include<iostream>
using namespace std;
main()
{
    cout<<"enter first number :";
    int num1;
    cin>>num1;
    cout<<"enter second number :";
    int num2;
    cin>>num2;
    cout<<"enter the operator(+, -,* ,/):";
    char operatorsymbol;
 
    cin>>operatorsymbol;
    if(operatorsymbol=='+')  {
        cout<<num1-num2;



    
}
if(operatorsymbol=='-' ){
    cout<<num1+num2;

}
if(operatorsymbol=='*'){
    cout<<num1/num2;

}


if (operatorsymbol=='/'){
cout<<num1*num2;

}
}
