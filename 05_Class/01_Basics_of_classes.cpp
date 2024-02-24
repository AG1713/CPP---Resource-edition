# include<iostream>
using namespace std;



// Introduction
// A class is a user defined data type that consists of its own data members and functions.
// It means that a class is a collection of data and functions generally having
// similar use. We can create objects/instance of the class.
// Classes are the basic building block in Object Oreinted Programming.
// Consider a class, say employee,


class Employee // This is how to define a class in C++
{
    private: // These are private variables and/or methods. These can be accessed only in class
        int a, b, c;
    public: // These are public variables/methods, these can be accessed throughout the program.
        int d, e;
    
    // Functions of a class are called methods.
    // Just create them like normal functions.
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        };
        void setdata(int a1, int b1, int c1);


};

// Function declaration
// We can see that we typed the function 'getdata()' inside the class,
// whereas, we declared the function 'setdata()' outside the class.
// There is almost no difference in defining a method either ways.
// The only differnce, and a point to remmeber, is that - 
// Functions DECLARED AND DEFINED inside the class are by default INLINE functions.
// But functions which are DECLARED INSIDE THE CLASS AND DEFINED OUTSIDE are NOT INLINE functions

void Employee :: setdata(int a1, int b1, int c1){
            a = a1;
            b = b1;
            c = c1;
        };


// Access Specifiers
    // By the name itself, we can say that an access specifier specifies the 
    // access of a particular part of the program.
    // All of the access specifiers are :-
        // 1. Public :
            // When we define a block of code in class as public, we can access
            // those members throughout the code
        // 2. Private
            // When we define a block of code in class as private, we CANNOT
            // access members outside the class, we can use them only inside
            // the calss definition
            // NOTE that when we do not specify any access specifier,
            // the default access specifier of the members is private.
        // 3. Protected
            // Protected members can be inherited, but cannot be accessed
            // outside of the class similar to private members

        // By the term 'access' we would see more about it while creating objects


        // If you came from Java, there is no default acess specifier in C++
        // In other words, the default access specifier is private.




int main(){



    // (Read through making of class in the above part.)
    // Classes in summary
    // Classes are improvised structures, because it lacked few things as:-
        // Members are public.
        // You could not put in methods/functions. (In C++ we can, but not in C)

    // Basically,
    // Classes = structures + more functonalities
    // Classes can have methods.
    // Classes can make few members private or public based on our choice.
    // You cannot access a private member through an object.


    // Objects
    // Consider a factory, manufacturing cars. In this case, the factory is a class
    // and each car created is a object.
    // In more technical terms, objects are the instances of a class that are created to
    // use the attributes and methods of a class.
    // In other words, before this, we created many variables of different data types.
    // For our understanding, we can say that the data type is a class and the
    // variable created is an object



    Employee harry;
    harry.d = 32;
    harry.e = 45;
    // harry.a = 34; The reason this doesn't work is because a,b and c are private variables
    // and cannot be accessed by an object (but can via class)


    harry.setdata(1,2,4);
    harry.getdata();

    // Similarly, we can create many objects of a single class
    Employee emp1;
    Employee whatever_the_name_is;



    // REMEMBER THAT
    // Defining a class doesn't add to memory, creating an object does.
    // The size of the object is the sum of individual sizes of variables declared.
    // Size of an object of empty class is '1'. However this one doesn't add up if the class isn't empty.

    return 0;
}