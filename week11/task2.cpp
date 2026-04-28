#include<iostream>
using namespace std;
const int cols =2;
void printtoyotablue(string arr[][cols],int rows)
{
    for(int i=0;i<rows;i++)
    if(arr[i][0]=="Toyata" && arr[i][1] == "Blue")
    cout<<"Toyota  Blue at row  "<<i<<endl;

}
int converter(string arr[][cols],int  rows,string color){
    int count =0;
    for(int i=0;i< rows; i++)
    if(arr[i][1] == color )count++;
    return count;

}
int main()
{
  string cars[4][2]={
   { "Toyota","Blue"},
   {"Nissan ","Red" },
   {"Toyota","Red"},
   {"Honda","Blue"},

  };
  int  rows=4;
  printtoyotablue(cars,rows);
  cout<<"total red cars "<<converter(cars,rows,"red")<<endl;
  int nissancount =0;
  for(int i=0;i<rows;i++)
  if(cars[i][0] =="Nissan ")nissancount ++;
  cout<<"total nissan cars :"<<nissancount<<endl;
  cout<<"Total blue cars :"<<converter(cars,rows,"blue")<<endl;
  return 0;
  
}