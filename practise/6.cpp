#include<iostream>
using namespace std;
int main()
{
    int array[]={7,5,8,3,4,9};
    int n=6;
    if(n<3)
    {
        cout<<"not 3 elements :";
     return 0;

    }
int first=array[0];
int second=array[1];
int third=array[2];
if(first<second)swap(first,second);
if(first <third)swap(first,third);
if(second<third)swap(second,third);
for( int i=3;i<n;i++){
    if(array[i]>first){
        third=second;
        second=first;
        first=array[i];

    }
    else if (array[i]>second)
    {
        third=second;
        second=array[i];

    }
    else if(array[i]>third)
    {
        third=array[i];
    }
}
cout<<"1st :"<<first<<endl;
cout<<"2nd:"<<second<<endl;
cout<<"3rd :"<<third<<endl;
return 0;

}