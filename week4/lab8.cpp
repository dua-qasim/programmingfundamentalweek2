#include<iostream>
using namespace std;
main()
{
    cout<<"enter number[0-100] :";
    int num;
    cin>>num;
    int num01;
    num01=num% 10;
    string txt;
    txt="";
    string txt2;
    txt2="";
if(num==0){ 
    txt="zero";

}
if(num01==1){
    txt="one";
    
}
if(num01==2){
    txt="two";
}
if(num01==3){
    txt="three";
}
if(num01==4){
    txt="four";

}
if(num01==5)
{
 txt="five";
}
if(num01==6){
    txt="six";

}
if(num01==7){
    txt="seven";
}
if(num01==8){
    txt="eight";
}
if(num01==9){
    txt="nine";

}
if(num==10){
    txt="ten";

}
if(num==11){
    txt="eleven";
}
if(num==12){
    txt="twelve";

}
if(num==13){
    txt="thirteen";
    
}
if(num==14){
    txt="forteen";
}
if(num==15){
    txt="fifteen";

}
if(num==16){
    txt="sixteen";
}
if(num==17){
    txt="seventeen";
}
if(num==18){
    txt="eighteen";
}
if(num==19){
    txt="nineteen";

}

if(num>=20){
    txt2="twenty";
}
if(num>=30){
    txt2="thirty";

}
if(num>=40){
    txt2="fourty";
}
if(num>=50){
    txt2="fifty";

}
if(num>=60){
    txt2="sixty";

}
if(num>=70){
    txt2="seventy";

}
if(num>=80){
    txt2="eighty";

}
if(num>=90){
    txt2="ninety";

}

if(num>=100){
    txt2="one hundred";
}
cout<<txt2<<""<<txt;
}