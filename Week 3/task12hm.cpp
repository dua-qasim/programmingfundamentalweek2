#include<iostream>
using namespace std;
main()
{

cout<<" number of square meters can paint :";
int n;
cin>>n;

cout<<"width of single wall in meters:";
int w;
cin>>w;
cout<<"height of wall in meters:";
int h;
cin>>h;
int wall_area;
wall_area=w*h;
int walls;
walls=n/wall_area;
cout<<"number of wall can be painted :"<<walls;
}