#include<iostream>
using namespace std;
main()
{
  cout<<"enter speed:";
  int speed;
  cin>>speed;
  if(speed<=10)  {
  

  cout<<"speed is slow";}
 else if (speed>10&& speed <=50)
  {
    cout<<"speed is average";
  }
 else if (speed> 50 && speed <100){
    cout<<"speed is fast";
  }
else if(speed>150 && speed<=1000){
    cout<<"speed is ultra fast ";

}
else{
   cout<< "speed is extremely fast";
   
}
  }

