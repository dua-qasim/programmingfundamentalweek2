#include<iostream>
using namespace std;
main()
{
int array[]={0,0,1,1,1,2,2,3,3,4};
int n =10;
if(n=0);
return 0;
int j=0;
for(int i=1;i<n;i++)
{
    if(array[i]!=array[j]){
        j++;
        array[j]=array[i];

    }
}
int newsize=j+1;
cout<<"new sizw"<<newsize<<endl;
cout<<"array :";
for(int i =0;i<newsize;i++)
cout<<array[i]<<" ";
return 0;

}