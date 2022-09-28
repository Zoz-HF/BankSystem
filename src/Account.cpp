#include "Account.h"
#include <iostream>
#include <String>

using namespace std;

int Account::no_of_acc=0;

Account::Account(string ac,double lp,double l,int du)
    {
        account_type=ac;
        limit_per_day=lp;
        cridet_limit=l;
        duration=du;
        no_of_acc++;
        id=no_of_acc;

    }


Account::~Account()
{}

void Account::deposit(double b){
    if (b>0)
 balance += b;
else
    cout<<"Error, please enter positive number ";
};



void Account::get_money(double m){

if (balance>m && m>0)
balance -= m;

else
    cout<<"Not allowed "<<endl;
};



void Account::borrow(double b){
    if(b<=limit_per_day && (cridet_limit-indebet)>=b)
    {
        if(indebet==0)
        {
            current_indebet_duration=duration;
        }
        indebet += b;
    }
};



void Account::pay_cridet(double p){
   if(p<=indebet) indebet -= p;

   if(indebet==0)
    {
    current_indebet_duration=duration;
    }
};


void Account::transfer(int id,double amount){};

void Account::display(){
cout<<"Account type is "<<account_type<<endl;
cout<<"Limit per day is "<<limit_per_day<<endl;
cout<<"Limit is "<<cridet_limit<<endl;
cout<<"Duration is "<<duration<<endl;
cout<<"============"<<endl;
};

void Account::check_status(){
cout<<"Hello world";
};



