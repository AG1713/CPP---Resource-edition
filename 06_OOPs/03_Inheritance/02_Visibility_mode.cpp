#include <iostream>
using namespace std;

class Employee
{
    int id;

public:
    float salary;
    int public_var = 2;
    Employee(int s_id)
    {
        id = s_id;
        salary = 45;
    };
    Employee(){}; // This is a default coontructor, the need of its existence is specified below.
    // Remember that a default contructor is a contructor which does not take any arguments.
};

// Derived class
// Syntax
// class {derived-class-name} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods etc
// };

// VISIBILITIY MODE is the way derived class inherits base class.
// Private Visibility mode means Public members of base class become private members of the derived class.
// Publlic Visibility mode means Public members of base class remains public members of the derived class.

// MAY IT BE ANY VISIBILITY OPTION, YOU CAN NEVER INHERIT PRIVATE MEMBERS OF A BASE CLASS.
// DEFAULT VISIBILITY MODE IS PRIVATE.

// Now creating a derived class (Programmer) from base class(Employee)
class Programmer : Employee
{   // Due to visibility mode not specified, the public data of the Employee class becomes the private member
    // of programmer class.
public:
    int Num_languages = 9;

    Programmer(int s_lang)
    {   // Now here we created a contructor for class Programmer.
        // However, since the Programmer class is inherited from the Employee class, the compiler will try to run contructor of Employee
        // Class and therefore raise an error. Thus, a default contructor in Base class is required in most cases.
        Num_languages = s_lang;
    }
};

class Derived2 : public Employee{

};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer someone(3);
    // Also,
    // cout<<someone.id<<endl; This line raises an error because private members of base class are not accessible by derived class.
    // cout<<harry.id<<endl; This will obv also give an error.
    cout << someone.Num_languages << endl;

    
    // Note that
    // cout<<someone.public_var<<endl; Raises an error, since its inherited privately from base class
    Derived2 object1;
    cout<<object1.public_var<<endl; // This line doesn't raise error due to public inheritance

    return 0;
}
