#ifndef NORMAL_H
#define NORMAL_H
#include <Account.h>
#include <iostream>
#include <String>


class Normal : public Account
{
    public:
        Normal(string u_n,string pass,string name);
        virtual ~Normal();
        void check_status();
        void display();

    protected:

    private:
};


#endif
