#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <String>
#include <ctime>
#include <sstream>

using namespace std;

class Account
{
public:
    Account(string ac,double l,int duration);
    virtual ~Account();
    void deposit(double b);
    void get_money(double m);
    void borrow(double b);
    void pay_cridet(double p);
    void check_status();
    void transfer(int id,double amount);
    virtual void display();
    void increament();
    char* get_date_of_borrow();
    char* get_date_of_payment();
    string get_user_name();
    string get_password();
    string get_name();
    void set_user_name(string u_n);
    void set_password(string p);
    void set_name(string n);
    string get_account_type();
    int get_id();
    string get_current_indebet_duration();
    string get_status();
    double get_balance();
    double get_cridet_limit();
    double get_indebet();


protected:
    time_t date_of_borrow,date_of_payment;
    static int no_of_acc;
    string user_name,password,name,account_type;
    int id,duration;
    bool status;
    double balance,cridet_limit,indebet,current_indebet_duration;

private:
};

#endif

