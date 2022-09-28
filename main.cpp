#include <iostream>
using namespace std;
#include "Account.h"
#include "Normal.h"
#include "Vip.h"

int main()
{

Normal n1("mmaa12","524kfghhj","Mahmoud");
n1.display();

Normal n2("mma152","524kfgj","Ahmad");
n2.display();

Vip v1("ZZ12","dfkjhdfkh","Ziyad");
v1.display();

Vip v2("om124","jldfvhdfkh","Omar");
v2.display();




    return 0;
}
