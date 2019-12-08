#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    Package package("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99);
    TwoDayPackage tpackage("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99,521);
    OvernightPackage opackage("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99,1);

    package.print();
    cout <<"总费用："<<package.calculateCost()<<"\n\n";
    tpackage.print();
    cout <<"总费用："<<tpackage.calculateCost()<<"\n\n";
    opackage.print();
    cout <<"总费用："<<opackage.calculateCost()<<"\n\n";




}
