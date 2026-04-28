#include<iostream>
using namespace std;
string alphabetchk(string  charcter);
int main()
{
    string charcter;
    cout<<"Enter Character : "<<endl;
    cin>>charcter;
    string result;
    result=alphabetchk( charcter);
    if (result == "C")
    
        cout<<"You have entered capital letter :"<<endl;
    else if (result =="S")
          cout<<"you have entered small letter :"<<endl;
     else
     cout<<"not alphabet :"<<endl;
     return 0;


    
}    
string alphabetchk(string  charcter){
    if (charcter >= "A" && charcter<="Z"){
    return "C";
 } 
 else if (charcter >= "a" && charcter<="z"){
    return "S";

 }
else{
    return "N";

}

}
