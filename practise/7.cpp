#include<iostream>
using namespace std;
int main()
{
    int array[]={1,0,1,2,0,1,1};
    int n=7;
    int count =0;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]==1){
            count++;
        }
         if (count>maxcount){
        maxcount=count;
         }
         else 
         {
            count=0;
         }


    }
cout<<"max count"<<maxcount<<endl;
    return 0;
}
