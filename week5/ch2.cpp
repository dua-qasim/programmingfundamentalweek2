#include<iostream>
using namespace std;
main(){
    string username, password;
    string studentname="";
    int studentage=0;
    string coursename="";
    int choice;
    for(int i=1;i<=3 ;i++){
        cout<<"enter username :";
        cin>>username;
        cout<<"enter password";
        cin>>password;
        if(username=="admin && password==1234"){
            cout<<"login successful"<<endl;
            break;

        }else{
            cout<<"wrong login"<<endl;
        }
        if(i==3 && ! (username=="admin"&&password=="1234")){
            cout<<"two many attempts. program end"<<endl;
        }
    }
 for(int i=1;i<=5;i++)
 {
    cout<<endl<<"----university management system----"<<endl;
    cout<<"1.Add student"<<endl;
    cout<<"2.View student"<<endl;
    cout<<"3.Add Course"<<endl;
    cout<<"4.Exit "<<endl;

    cout<<"enter choice :";
    cin>> choice;
    if(choice==1)
    {
        cout<<"enter student name";
        cin>>studentname;
        cout<<"enter student age";
        cin>>studentage ;
        cout<<"student  added successfully"<<endl;

        
    } if(choice==2){
    if(studentname !=""){
    cout<<"studentname :"<<studentname<<endl;
    cout<<"studentage"<<studentage<<endl;
    } else{
        cout<<"no student record found"<<endl;

    } 
}
    else if(choice==3){
cout<<"enter course name";
cin>>coursename;
cout<<"course added :"<<coursename<<endl;
    }
    else if (choice==4){
        cout<<"program ends";
        break;

    }else{
        cout<<"invalid choice"<<endl;
    }
    
}
}
        
    