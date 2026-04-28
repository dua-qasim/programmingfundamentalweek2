#include<iostream>
using namespace std;
int multiplybyfive(int num);
int main()
{
    int number , result;
    cout<<"Enter number :";
    cin>>number;
    
    result =multiplybyfive(number);
    
    cout<<"result is :"<<result;
return 0;
}
int multiplybyfive(int num)
{
    int total;
    total=num * 5;
    return total;
    

}




