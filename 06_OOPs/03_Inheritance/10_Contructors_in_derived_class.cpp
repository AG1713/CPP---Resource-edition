// Contructors in a derived class

/*
1) Firstly, we can use contructors in derived class.
2) If the contructor in the base class does not have any arguments, it will automatiall execute.
3) But if there are one or more arguments in the base class contructor, derived class need to pass arguments to the base class contructor.
(Needs to be explained more clearly)
4) If both base and derived have contructors, base class contructor is executed first.
5) In multiple inheritance , base classes are contructed in order in which they appear in the class declaration.
6) In multilevel inheritance, the contructors are executed in the order of inheritance.
*/


// Special syntax
/*
Derived-Contructor(arg1, ar2, arg3...):Base1-Contructor(arg1, arg2), Base2-Contructor(arg3, arg4)

Consider the arguments a1,a2,b1,b2,c1 and c2
Consider the inheritance of class A--->B--->C

While creating object, we type
C obj(a1, a2, b1, b2, c1, c2)

While creating contructor, we type
C(a1, a2, b1, b2, c1, c2): B(b1, b2), A(a1, a2)  [Idk why in syntax there is Base1 first and Base2 second.]



Special case (Virtual base class)
# The contructors for the virtual base classes are invoked before a non-virtual base class.
# If there are multiple virtual bsae classes, they are invoked in the order of declaration.
# Any non-virtual base class are then contructed before the derived class constructer is executed.

But since when we declare a class as virtual?
*/




/*
SUMMARY AS I UNDERSTOOD


*/





# include<iostream>
using namespace std;

class Base1{
    int data;
    
    public:
    Base1(int i){
        data = i;
        cout<<"'Base1' class contructor called."<<endl;
    }
    void printdata(){
        cout<<"The value of data is "<<data<<endl;
    }
};
class Base2{
    int data;
    
    public:
    Base2(int i){
        data = i;
        cout<<"'Base2' class contructor called."<<endl;
    }
    void printdata(){
        cout<<"The value of data is "<<data<<endl;
    }
};

class Derived1: public Base1, public Base2{
    int secret1, secret2;

    public:
    // Making a contructor
    Derived1(int a, int b, int c, int d): Base1(a), Base2(b){ // If we swapped position of base1 and base2 in this line,
    // we would run contructor of 'Base2' first and then that of 'base1' as mentioned in the rules above.
        secret1 = c;
        secret2 = d;
        cout<<"Derived class contructor called"<<endl;
    }
    void printdata(){ // Note that a function with same name is also present is base class.
        cout<<"The value of secret1 is "<<secret1<<" and secret2 is "<<secret2<<endl;
    }
};


# include<iostream>
using namespace std;

class Base_x{
    public:
    Base_x(int a){
        cout<<"Contructor of Base_x class"<<endl;
        cout<<a<<endl;
    }
};
class Derived_x: public Base_x{
    public:
    Derived_x(int a, int b):Base_x(a){
        cout<<"Contructor of Derived_x class"<<endl;
        cout<<b<<endl;
    }
};
class Derived_y: public Base_x, virtual Derived_x{
    public:
    Derived_y(int c, int a, int b):Base_x(a), Derived_x(a,b){ // Orders can be swapped
        cout<<"Contructor of Derived_y class"<<endl;
        cout<<c<<endl;
    }
};


int main(){
    Derived_y obj1(1,2,3);


    return 0;
}


int main(){
    Derived1 obj1(3,2,75,3);
    obj1.printdata(); // But still the function in the derived class is working. This may be an example of 
    // operator overloading or inheritance.

    Derived_y(1,2,3);

    return 0;
}