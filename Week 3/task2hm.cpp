#include<iostream>
using namespace std;
main()
{
cout<<"enter number of minutes :";
int minutes;
cin>>minutes;
cout<<"enter frames per second :";
int framespersecond;
cin>>framespersecond;
int totalframes;
totalframes=minutes*60*framespersecond;
cout<<" total number of frames :"<<totalframes;
}
