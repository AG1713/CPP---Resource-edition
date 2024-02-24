#include <iostream>
using namespace std;
// ***************************Static variables**********************************
// When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called
// multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried
// through the next function call.
// Static variabeles, inshort, are the global variables in a local code

// Static variables assoiciated with a class:-
// Static variables are assoiciated with a class. These are related to a class than an object. For example, consider a class class car and object
// Tata. Normally, if the variable isnt a private variable, we can access the variable by using Tata.<variable_name>, but here we cannot, possibly
// due to it is a private variable
// Secondly and most important, WE CAN UPDATE VARIABLES, MAY IT BE STATIC OR NORMAL VARIABLE, BUT A NORMAL VARIABLE IS RELATED TO CLASS ONLY,
// AND THEREFORE CHANGES IN IT LED TO CHANGE IN THE OBJECT ONLY, HOWEVER CHANGES IN THE STATIC VARIABLE EFFECTS THE ENITIRE CLASS.

// These are similar to self.variables in python. Or simply similar to global variables. Therefore, static members have large scope.

class Arcade
{
    static int count;
    int num1 = 54;
    int num2 = 12;

public:
    int num3 = 87;
    int num4 = 52;
    void display_data(void)
    {
        cout << "num1 = " << num1 << "  num2 = " << num2 << "  num3 = " << num3 << "  num4 = " << num4 << endl;
        cout << "The value of count is =" << count << endl;
        // count++;
        count++;
    }
};

int Arcade ::count = 100000; // Static variable.
// Default values (values if value of static variable is not specified.)
// int = 0
// float = 0
// string = "" (Notice how double iverted commas, because further addition to the string causes concateination)
// char = idk, probably '' but we cannot concatenate.

// ***************************Static methods*************************************
class New
{
    static int var1;

    public:
    static void function1(void) // Note that static functions, if need to be accessed, should be in public.
    {
        cout << "The value of var1 is " << var1 << endl; // Static methods can only access static variables.
        var1++;
    }
};
int New ::var1 = 8;

int main()
{
// ***************************Static variables**********************************
    Arcade obj1;
    obj1.display_data(); // Here the value of count is 0
    // obj1.num1=3; We cannot edit private variales.

    Arcade obj2;
    obj2.display_data(); // But here the value of count changes to one, this is because change is done in class variable, and count here is not
    // assoiated with any object.

    Arcade obj3;
    obj3.display_data();


// ***************************Static methods*************************************
    // To run our static function, which we cannot access, we need to take help of class.
    New ob1;
    New::function1();
    New::function1();
    New::function1();


    return 0;
}