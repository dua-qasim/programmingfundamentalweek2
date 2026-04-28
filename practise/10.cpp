#include<iostream>
using namespace std;
main()
{
    int array[]={1,2,3,4};
    int n=4;
    int carry=1;
    for(int i=n-1;i>=0;i--)
    {
        int sum=array[i]+carry;
        array[i]=sum%10;
        carry=sum/10;

    }
    cout<<"result :"<<endl;
    if(carry ==1)
    cout<<"1";
    for(int i=0;i<n;i++)
cout<<array[i]<<" "<<endl;
return 0;
}
