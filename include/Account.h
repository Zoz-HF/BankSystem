#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <String>


using namespace std;

class Account
{
    public:
        Account(string ac,double lp,double l,int duration);
        virtual ~Account();
        void deposit(double b);
        void get_money(double m);
        void borrow(double b);
        void pay_cridet(double p);
        virtual void check_status();
        void transfer(int id,double amount);
        virtual void display();

    protected:
        static int no_of_acc;
        string user_name,password,name,account_type;
        int id,duration,current_indebet_duration;
        bool status;
        double balance,limit_per_day,cridet_limit,indebet;

    private:
};

#endif

