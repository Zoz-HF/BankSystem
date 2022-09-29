#include <iostream>
using namespace std;
#include "Account.h"
#include "Normal.h"
#include "Vip.h"
#include <ctime>
int main()
{

    Vip v1("sdnjsd","sdcnc","jbckjbc");
    v1.deposit(542);
    cout<<"your balance is: "<<v1.get_balance()<<endl;
    cout<<"your Cridet borrow limit is: "<<v1.get_cridet_limit()<<endl;
    v1.borrow(500);
    cout<<"your date of payment is "<<v1.get_date_of_payment();
    cout<<v1.get_current_indebet_duration()<<endl;
    cout<<"your Cridet borrow limit is: "<<v1.get_cridet_limit()<<endl;




    return 0;

}
