#include<iostream>
using namespace std;
main(){
    cout<<"enter first     brother name:";
    string firstname;
    cin>>firstname;
    cout<<"enter second brother name;";
    string secondname;
    cin>>secondname;

    cout<<"enter third brother name";
    string thirdname;
    cin>>thirdname;
    cout<<"enter first brother age";

    int  age1;
    cin>>age1;
    cout<<"enter second brother age";
   int age2;

   cin>>age2;
   cout<<"enter third brother age ";
   int age3;
   cin>>age3;
   if(age1<age2&& age1<age3){
    cout<<"younger brother is"<<firstname;
   }
   if(age2<age1&& age2<age3){
    cout<<"younger brother is "<<secondname;
   }
   if(age3<age1&&age3<age1){
    cout<<"younge brother is"<<thirdname;
   }
   
   }





  