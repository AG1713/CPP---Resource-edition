# include<iostream>
using namespace std;


// Ambiguity example 1
class Base1{
public:
void greet(){
    cout<<"Hello"<<endl;
}
};

class Base2{
public:
void greet(){
    cout<<"Hallo"<<endl;
}
};

class Derived1: public Base1, public Base2{
    // To resolve abiguity from two functions having same name, we use the following
    public:
    void greet(){
        Base2::greet();
    }
};


// Ambiguity example 2
class Base3{
    public:
    void say(){
        cout<<"Hellow World"<<endl;
    }
};
class Derived2: public Base3{
    public:
    void say(){
        cout<<"Guten Morgen"<<endl;
        // Now, we inherited this class. Here we now have two 'say'functions. But the programmer will run smoothly since
        // the 'say' function of derived class takes precedence.
    }
};

int main(){
    // Ambiguity example 1
    Derived1 obj1;
    // obj1.greet(); If we kept 'Derived1' empty, an error will occur since there are 2 functions with same name 'grreet' and the 
    // compiler is now confused.
    obj1.greet();

    // Ambiguity example 2
    Derived2 obj2;
    obj2.say();
    return 0;
}


/*
NOTE
If a pair of base and derived class would have the same name of functions, the one in the derived would run.
However, if this funcion in derived with same name is private, we would get an error that cannot access the function.
This is probably because, before searching in base class, the compiler searches in derived class, and when it finds,
it doesn't cross check in base class.

*/