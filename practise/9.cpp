#include<iostream>
using namespace std;
main()
{
   int array[]={1,2,3,4,20,40,50};
   int n =7;
   for (int i =0;i<n ;i+=2)
   {
    if(i>0&& array[i]<array[i-1]){
        swap(array[i],array[i-1]);
    }
        if(i<n-1&&array[i]<array[i+1]){
            swap(array[i],array[i+1]);

        

    }

   }
   cout<<"wave array :";
   for(int i=0;i<n;i++)
   cout<<array[i]<<" ";
   return 0;
   
}