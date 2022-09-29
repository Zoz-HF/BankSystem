#include "Account.h"
#include <iostream>
#include <String>
#include <sstream>

using namespace std;

int Account::no_of_acc=0;

Account::Account(string ac,double l,int du)
{
    account_type=ac;
    cridet_limit=l;
    duration=du;
    no_of_acc++;
    id=no_of_acc;
}


Account::~Account()
{}

void Account::deposit(double b)
{
    if (b>0)
        balance += b;
    else
        cout<<"Error, please enter positive number ";
};



void Account::get_money(double m)
{

    if (balance>m && m>0)
        balance -= m;

    else
        cout<<"Not allowed"<<endl;
};



void Account::borrow(double b)
{
    if((cridet_limit-indebet)>=b)
    {

        if(indebet==0)
        {
            date_of_borrow=time(0);
            date_of_payment= date_of_borrow+duration*24*60*60;
        }
        indebet += b;
    }
};



void Account::pay_cridet(double p)
{
    if(p<=indebet) indebet -= p;

    if(indebet==0)
    {
        status=false;
        current_indebet_duration=duration;
    }
};


void Account::transfer(int id,double amount) {};

void Account::display()
{
    cout<<"Account type is "<<account_type<<endl;
    cout<<"Limit is "<<cridet_limit<<endl;
    cout<<"Duration is "<<duration<<endl;
    cout<<"============"<<endl;
};

void Account::check_status()
{

    time_t now = time(0);
    current_indebet_duration=difftime(date_of_payment,now);

    if(current_indebet_duration<0)
        status=true;
};

void Account::increament()
{

    check_status();
    if(current_indebet_duration<0)
    {
        if (indebet>0)
        {
            indebet *=1.12;
        }
        date_of_payment += 2592000;

    }
}

char* Account::get_date_of_borrow()
{
    return ctime(&date_of_borrow);
};

char* Account::get_date_of_payment()
{
    return ctime(&date_of_payment);
};

string Account::get_user_name()
{
    return user_name;
};
string Account::get_password()
{
    return password;
};
string Account::get_name()
{
    return name;
};

void Account::set_user_name(string u_n)
{
    user_name=u_n;
};

void Account::set_password(string p)
{
    password=p;
};

void Account::set_name(string n)
{
    name=n;
};

string Account::get_account_type()
{
    return account_type;
};

int Account::get_id()
{
    return id;
};

string Account::get_current_indebet_duration()
{
    check_status();
    long a= (long) current_indebet_duration;
    a /= 86400;
    string st= to_string(a);
    st += " days left to pay";
    return st;
};

string Account::get_status()
{
    if(status)
        return "You are in debt";
    else
        return "You are not indebted";

};

double Account::get_balance()
{
    return balance;
};

double Account::get_cridet_limit()
{
    return cridet_limit-indebet;
};
double Account::get_indebet()
{
    return indebet;
};

