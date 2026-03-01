#include<iostream>
using namespace std;
main()
{
cout<< "entersize in megabytes :" ;
int megabytes;
cin>>megabytes;
int bits;
bits=megabytes*1024*1024*8;
cout<<megabytes<<"megabytes is equivalent to" <<bits<<"bits";
}