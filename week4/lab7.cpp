#include<iostream>
using namespace std;
main()
{
    cout<<"enter name of  shape:";
    string shape;
    cin>>shape;
    double area;
    if(shape=="square"){
        cout<<"enter length";
        int l;
        cin>>l;
     area=l*l;

    }
    else if(shape=="rectangle"){
        cout<<"enter length";
        int l;
        cin>>l;
        cout<<"enter width";
        int w;
        cin>>w;
    area= l*w;
    }
    else if (shape=="circle"){
        cout<<"enter radius";
        int radius;
        cin>>radius;
        area=3.1415*radius*radius;
    }
    else if (shape=="triangle"){
        cout<<"enter base";
        int base;
        cin>>base;
        cout<<"enter height";
        int height;
        cin>>height;
        area=0.5*base*height;

    }
else{
    cout<<"shape  is not found";

}
    cout<<"area is "<<area;
}

