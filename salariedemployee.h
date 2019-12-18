#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

namespace employeessavitch{

    class Salariedemployee
    {
    private:
        double salary;//weekly
        /* data */
    public:
        Salariedemployee(/* args */);
        ~Salariedemployee();

        double get_salary() const;
        void set_salary(double new_salary);
        void print_check();
    };
    
    Salariedemployee::Salariedemployee(/* args */)
    {
    }
    
    Salariedemployee::~Salariedemployee()
    {
    }
    
}

#endif SALARIEDEMPLOYEE_H