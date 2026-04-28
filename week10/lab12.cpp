#include<iostream>
#include<cmath>
using namespace std;
string evenishoroddish(int number);
int sum(int n1);
main()
{
    int num, n1,add;
    cout<<"Enter 5 digit number : "<<endl;
    cin>>num;

    if(num<=10000 ||num>=99999)
    {
        cout<<"enter 5 digit only :"<<endl;
        return 0;
    }
    string result;

    result =evenishoroddish( num);
    cout<<result;

return 0;
}
string evenishoroddish(int number){
   int digitsum= sum( number); 
   if (digitsum%2 == 0)
   return "evenish";
   else
   return "Oddish";

}
int sum(int n1)
{
    int sum =0;
    while(n1>0)
    {
        sum = sum +(n1%10);
        n1=n1/10;
    }
    return sum;
    
}

