#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(void) // This is a default constructor. It does not take any parameters.
    {
        a = 4;
        b = 3;
    };

    void display(void)
    {
        cout << "You term is " << a << "+" << b << "i" << endl;
    }
};

class Complex1
{
private:
    int a, b;

public:
    Complex1(int x, int y) // This is a parameterized constructor, it takes parameters.
    {
        a = x;
        b = y;
    };

    void display(void)
    {
        cout << "You term is " << a << "+" << b << "i" << endl;
    }
};

int main()
{

    // There is a difference between calling a default and a parameterised constructor.
    Complex x1; // Calling of a default contructor
    x1.display();



    // Parameterized contructors can be called implicitly or explicitly

    // Implicit call
    Complex1 x2(1, 2);
    x2.display();

    // Explicit call
    Complex1 x3 = Complex1(5, 6);
    x3.display();
    // Whatever calling method may be, the results will be the same.

    return 0;
}