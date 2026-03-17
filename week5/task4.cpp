#include<iostream>
using namespace std;
main(){
    int num,digit,count;
    count=0;
    cout<<"enter number:";
    cin>>num;
    cout<<"enter digit :";
    cin>>digit;
    for(int i=num; i>0;i=i/10)    {
    int rem=num%10;
    if(rem==digit){
        count++;
    
    }
    num=num/10;
    } 
cout<<"frequency of digit is :"
<<count<<endl;
}