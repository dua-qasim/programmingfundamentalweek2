#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int n = 5;
    cout<<"original :";
    for(int i =0; i<n; i++)
    cout<<array[i]<<"";
    int start =0;
    int end =n-1;
    while(start<end)
{
    int temp=array[start];
    array[start]=array[end];
    array[end]=temp;
 

    start++;
    end--;


}
cout<<"/nReversed : "<<endl;
for(int i =0; i<n; i++)
cout<<array[i]<<endl;
return 0;

}