#include "Normal.h"

Normal::~Normal()
{
}

Normal::Normal(string u_n,string pass,string n):Account("Normal",5000,10000,60)
{
indebet=0;
balance=0;
status=false;
user_name=u_n;
password=pass;
name=n;
};

void Normal::check_status(){

if(current_indebet_duration<=0)
    status=true;
     //here write the code of interest (indebet *=1.12)

else
    status=false;

}
void Normal::display(){
Account::display();
cout<<"this object id is "<<id<<endl;
cout<<"indebet is "<<indebet<<endl;
cout<<"balance is "<<balance<<endl;
cout<<"status is "<<status<<endl;
cout<<"user_name is "<<user_name<<endl;
cout<<"password is "<<password<<endl;
cout<<"name is "<<name<<endl;
cout<<"***************************************************"<<endl;
}