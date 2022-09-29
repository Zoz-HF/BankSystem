#ifndef VIP_H
#define VIP_H
#include <Account.h>
#include <iostream>
#include <String>


class Vip : public Account
{
    public:
        Vip(string u_n,string pass,string n);
        virtual ~Vip();
        void display();

    protected:

    private:
};

#endif
