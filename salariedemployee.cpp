//This is the file salariedemployee.cpp
//This is the implementation for the class SalariedEmployee.
//The interface for the class SalariedEmployee is in 
//the header file salariedemployee.h
#include <iostream>
#include <string>
#include "salariedemployee.h"

using namespace std;

namespace employeessavitch{
    Salariedemployee::Salariedemployee():Employee(),salary(0){
        //deliberately empty
    }

    Salariedemployee::Salariedemployee(string the_name,string the_number,double the_weekly_salary):Employee(the_name,the_number),salary(the_weekly_salary){
        //deliberately em[ty
    }
    
    double Salariedemployee::get_salary() const{

    }

}