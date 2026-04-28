#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,5};
    int n =5;
    int largest = INT_MIN;
    int secondlargest= INT_MIN;
    int thirdlargest= INT_MIN;
    for(int i=0 ; i<n ;i++){
    if(array[i]>largest)
    {
        thirdlargest =secondlargest;
        
        secondlargest=largest;
    
        largest=array[i];

    }
    else if(array[i]>secondlargest && array[i]!=largest)
    {
        thirdlargest = secondlargest;

        secondlargest=array[i];

    }
    else if (array[i]>thirdlargest && array[i]!=largest && array[i]!=secondlargest){
        thirdlargest=array[i];

    }

    
}
cout<<"largest :"<<largest<<endl;
cout<<"secondlargest : "<<secondlargest<<endl;
cout<<"thirdlargest : "<<thirdlargest<<endl;

return 0;
    

}