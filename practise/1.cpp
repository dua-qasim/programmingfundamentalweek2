#include<iostream>
using namespace std;
int main()
{
    int array[5] ={10,20,30,40,50};
    int n=5;
    int largest=array[0];
    int secondlargest=-1;
    for(int i =1;i<n;i++)
    {
        if (array[i]>largest){
            secondlargest = largest;
            largest=array[i];
            

        }
        else if (array[i]>secondlargest && array[i]!=  largest){
            secondlargest = array[i];


        }
    }
    cout<<"largest ="<<largest<<endl;
    cout<<"Secondlargest ="<<secondlargest<<endl;
    return 0;

}
   