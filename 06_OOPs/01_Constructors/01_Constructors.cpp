# include<iostream>
using namespace std;

class Complex{
    // Creating a construtor
    // Constructor is a special member function of the class with the same name as the class.
    // It is automatically invoked (called) whenever an object is created.
    // It is used to initialize the objects of its class.
    private:
    int a, b;

    public:
    Complex(void)// Constructor declaration.
    {
        a = 4;
        b = 3;
        // This function definition of the constructor can be defined using forward declaration too.
    };

    void display(void){
        cout<<"You term is "<<a<<"+"<<b<<"i"<<endl;
    }

};


int main(){
    Complex x1;
    x1.display(); // Note that, constructor is already run before this function as seen in the results.

    // Similarly
    Complex x2,x3;
    x2.display();
    x3.display();



    return 0;
}


// KEY POINTS ABOUT CONSTRUCTORS.
/*
1. A contructor doesn't have a return type (not even void).
2. It should be declared in the public section of the class.
3. It is always make using the fixed syntax : <class_name>(<parametres>).
4. It can have default arguments.
5. We cannot refer to its address.
*/

// Types of contructors
/*
1) Default constructors - Those which take no parameters (in parenthesis, there may be 'void' or '')
2) 
*/