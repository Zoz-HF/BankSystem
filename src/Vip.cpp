#include "Vip.h"

Vip::Vip(string u_n,string pass,string n):Account("VIP",10000,20000,180)
{
indebet=0;
balance=0;
status=false;
user_name=u_n;
password=pass;
name=n;
}

Vip::~Vip()
{

}

void Vip::display(){
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

void Vip::check_status(){

if(current_indebet_duration<=0)
    status=true;
     //here write the code of interest (indebet *=1.12)

else
    status=false;

}
