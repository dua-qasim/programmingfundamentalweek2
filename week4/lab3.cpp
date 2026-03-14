#include<iostream>
using namespace std;
main()
{
    cout<<"enter temperature of city1 in degree:";
     int city1;
    cin>>city1;
    cout<<"enter temperature of city2 in degree:";
    int city2;
    cin>>city2;
    int differ;
    differ=city1-city2;
    if (differ > 10 || differ<-10 ) {
    cout<< "difference is too big";
    }
    
    else{
      cout<<  "progrmm ends";
    }


    

    }
