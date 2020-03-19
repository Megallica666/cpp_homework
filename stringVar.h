#include <iostream>
using namespace std;
class StringVar{
    public:
    StringVar(int size);
    StringVar();
    StringVar(const char a[]);
    StringVar(const StringVar& string_object);

    ~StringVar();

    int length() const;

    void input_line(istream& ins)
}