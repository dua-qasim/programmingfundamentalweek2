#include<iostream>
using namespace std;
int main()
{
    int array []={1,2,3,4,5,6,7,8,9};
    int n =9;
    int k = 3;
    cout<<"ORIGINAL : "<<endl;
    for(int i = 0 ;i<n;i++)
    cout<<array[i]<<" "<<endl;
    for(int i=0 ; i<n;i += k){
        int start=i;
        int end=i + k-1;
        if(end>=n)
        end=n-1;
        while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]= temp;
        start++;
        end --;
        }

    }
    cout<<"reversed is"<< k << ": ";
    for(int i=0;  i<n;i++)
cout<<array[i]<< " ";
return 0;


 
}