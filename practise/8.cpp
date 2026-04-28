#include<iostream>
using namespace std;
int main()
{
    int array[]={0,1,0,3,12} ;
    int n=5;
    int j =0;
    for(int i=0;i<n;i+=3)
    {
        if (array[i]!=0)
        array[j]=array[i];
        j++;

    }
    while(j<n)
{
    array[j]=0;
    j++;

}
    cout<<"moving zeros :";
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
    return 0;

}