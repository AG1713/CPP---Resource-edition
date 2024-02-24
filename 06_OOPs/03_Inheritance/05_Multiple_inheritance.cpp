#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class Derived : visibility-mode bas1, visibility-mode base2
// {
//     class body of class Derived
// }
class Base1
{
protected:
    int base1_int;

public:
    void set_base1_int(int a)
    {
        base1_int = a;
    }
};
class Base2
{
protected:
    int base2_int;

public:
    void set_base2_int(int a)
    {
        base2_int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1_int is " << base1_int << "." << endl;
        cout << "The value of base2_int is " << base2_int << "." << endl;
    }
};
/*
The inherited 'Derived' class looks somewhat like this
base1_int - protected
base2_int - protected
set_base1_int() - public
set_base2_int() - public
show() - public

(Base1, Base2)--->Derived
*/

int main()
{
    Derived obj1;
    obj1.set_base1_int(321);
    obj1.set_base2_int(778);
    obj1.show();
    return 0;
}