#include<iostream>
using namespace std;
main()
{
    cout<<"enter number of holidays:";
    int holidays;
    cin>>holidays;
    int workingdays;
    workingdays=365-holidays;
    int time;
    time=workingdays * 63 + holidays* 127;
    int norm= 30000;
    int differ;
    
    if(time>norm){
        differ= time - norm;
     cout<<"  tom will run away";

    
    }
    else{
        differ= norm-time;
        cout<<"tom sleeps well";

    }
int hours;
hours=differ/60;
int min;
min= differ % 60;
cout<<"hours  are"<<hours ;
cout<<"min"<<min;

    
    
    }

