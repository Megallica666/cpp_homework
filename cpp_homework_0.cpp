#include <iostream>
#include "HourlyEmployee.h"
#include "salariedemployee.h"

using std::cout;
using std::endl;
using namespace employeessavitch;
 

int main(){
    HourlyEmployee joe;
    joe.set_name("Mighty Joe");
    joe.set_ssn("123-456-789");
    joe.set_rate(20.50);
    joe.set_hours(40);
    cout<<"check for"<<joe.get_name()<<"for "<<joe.get_hours()<<" hours.\n";
    joe.print_check();
    cout<<endl;

    Salariedemployee boss("Mr. Big shot","987-65-4321",10500.50);
    cout<< "Check for"<<boss.get_name()<<endl;
    boss.print_check();

    return 0;
}