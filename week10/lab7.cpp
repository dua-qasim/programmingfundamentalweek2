#include<iostream>
#include<cmath>;
using  namespace std;
main()
{
    float angle,dis;
    cout<<"Enter distance in feet :";
    cin>>dis;
    cout<<"Enter angle  in degree:";
    cin>>angle;
    float rad=angle*3.14/180;
    cout<<"height is : "<<tan(rad)*dis;


    return 0;
}


    




 
