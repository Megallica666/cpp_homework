//
// Created by Franz on 2019/12/23.
//

#ifndef CPP_HOMEWORK_ADMINISTRATOR_H
#define CPP_HOMEWORK_ADMINISTRATOR_H

#include <cstring>
#include "SalariedEmployee.h"

using namespace std;
using namespace employeessavitch;
namespace administrator
{
    class administrator : public Salariedemployee
    {
    private:
        string title;
        string AreaOfResponsibility;
        string supervisor;
    public:
        administrator();
        void set_supervisor(string name);
        void input();
        void print();
        void print_check();
        ~administrator();
    protected:
        double annual_salary;

    };
    
    administrator::administrator()
    {
    }
    
    administrator::~administrator()
    {
    }
    
}
#endif //CPP_HOMEWORK_ADMINISTRATOR_H
