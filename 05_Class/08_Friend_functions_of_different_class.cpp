#include <iostream>
using namespace std;
// Make two classes. Take one function of any class as a friend function of the other.


// Lets consider two classes, Class1 and Class2

class Class1; // Comeback here later


class Class2{ // Firstly we declared the class which posses the friend function, say magnitude
    public:
    int magnitude(Class1 o1, Class1 o2); // The reason for forward declaration of this function will be discussed later.
    // Here, this friend function has arguments in type of 'Class1', so on first line of the program, we did forward declaration of
    // this 'Class1' so that the program can run smoothly till here. If this forward declaration is not done, then an error will 
    // occur regarding of accepting the type 'Class1'
};

class Class1// Now we define 'Class1'
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printdata(void)
    {
        cout << "The value of parameter a is " << a << " and the value of parameter b is " << b << endl;
    }
    friend int Class2::magnitude(Class1 o1, Class1 o2); // Here we stated that the function magnitude (which we forward declared earlier in 
    // 'Class2') is the friend of this class.
};

int Class2::magnitude(Class1 o1, Class1 o2){ // We forward declared this function because,
        return (o1.a + o2.a); // Here it has o1.a and o2.b
        // Earlier when we forward declared 'Class1', compiler knew only about its existence and none about its variables 'a' and 'b'.
        // This results in error, if this function was not forward declared.
    }

// Now the process will run smoothly...


int main()
{
    Class1 obj1, obj2;
    obj1.setdata(1,2);
    obj1.printdata();
    obj2.setdata(4,3);
    obj2.printdata();

    Class2 obj3;
    int variable1 = obj3.magnitude(obj1,obj2);
    cout<<"The magnitude is "<<variable1<<endl;


    return 0;
}