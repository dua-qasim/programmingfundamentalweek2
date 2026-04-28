#include<iostream>
#include<cmath>
using namespace std;
void solvequadr(float a, float b , float c)
{
    int discri=(b*b)-4*a*c;
    cout<<"Determinant = "<<discri<<endl;
    
       if (discri>0)
        {
            float root1=(-b+sqrt(discri)/2*a);
            float root2=(-b -(sqrt(discri)/2*a));
            cout<<"the real and distinct root :"<<endl;
            cout<<"x1 :"<<root1<<endl;
            cout<<"x2 :"<<root2<<endl;



        }
        else if(discri==0)
        {
            float  root = -b/(2*a);
            cout<<"One Real Root :"<<endl;
            cout<<"x = "<<root<<endl;
        
        }

        else {

        
            float realPart = -b/(2*a);
            float imagPart=sqrt(-discri)/(2*a);
            cout<<"Complex Roots :"<<endl;
            cout<<"X1 = "<<realPart << "+"<<imagPart << "i"<<endl;

            cout<<"x2 = "<<realPart<<"-"<<imagPart<<"i"<<endl;



        }
    
}

 int main()
{
 float a,b,c ;
  cout<<"Enter the value of a :";
  cin>>a;
  cout<<"Enter the value of b :";
 cin>>b;
 cout<<"Enter the value of c :";
 cin>>c;
solvequadr(a,b,c);
return 0 ;



    
}
