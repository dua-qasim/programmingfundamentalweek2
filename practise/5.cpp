#include<iostream>
using namespace std;
int main()
{
   int  array[] ={1,2,3,4,5};
   int n=5;
   int k=3;
   k=k % n;

   cout<<"original : "<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<array[i]<<" ";

   }
   cout<<endl;
   for (int i = 0; i<k;i++){
    int first=array[0];
    for(int j=0;j<n-1; j++){
        array[j]=array[j+1];

    }
     array[n-1]=first;

   }
   cout<<"rotate is "<<k <<" : ";
   for(int i=0; i<n ;i++)
   cout<<array[i]<<" ";
   return 0;

} 