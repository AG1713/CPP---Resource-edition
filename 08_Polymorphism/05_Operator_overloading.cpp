# include<iostream>
using namespace std;

// We can make our own operator function in C++!


// Basics on types of operators :-
// Unary Operators - which take only one operand. eg. &,!
// Binary Operators - which take two operands. eg. <<, > (left-shift, and right shift)
// There exists ternary operatorrs and so on, but idk if they are in C++
// This is called the arity of an operator

// Note that operators like +,-,/,* might ne unary or binary depending on use cases

// Syntax
// <return type> operator <symbol> (<operand/s>){
//     <definition>
// }


class Complex{
    int real;
    int imaginery;

    public:
    Complex(){
        real = 0;
        imaginery = 0;
    }
    
    void operator& (){ // This is how we overload unary operator
        cout<<'('<<real<<')'<<"+"<<'('<<imaginery<<"i"<<')'<<endl;
    }

    int get_real(){return real;}
    int get_imaginery(){return imaginery;}
    void set_values(int r, int i){
        real = r;
        imaginery = i;
    }
    
};

Complex operator+ (Complex a, Complex b){ // This is how we overload binary operator
    Complex temp;
    temp.set_values(a.get_real() + b.get_real(), a.get_imaginery() + b.get_imaginery());
    return temp;
}

Complex operator* (Complex a, Complex b){
    Complex temp;
    temp.set_values((a.get_real()*b.get_real())-(a.get_imaginery(), b.get_imaginery()), (a.get_real()*b.get_imaginery())+(a.get_imaginery()*b.get_real()));
    return temp;
}

// In C++, following are the general rules for operator overloading.
/*
1) Only built-in operators can be overloaded. New operators can not be created.
2) Arity of the operators cannot be changed.
3) Precedence and associativity of the operators cannot be changed.
4) Overloaded operators cannot have default arguments except the function call operator () which can have default arguments.
5) Operators cannot be overloaded for built in types only. At least one operand must be used defined type.
6) Assignment (=), subscript ([]), function call (“()”), and member selection (->) operators must be defined as member functions
7) Except the operators specified in point 6, all other operators can be either member functions or a non member functions.
8 ) Some operators like (assignment)=, (address)& and comma (,) are by default overloaded.
*/

// Note that when we define an operator function inside the class, the class itself is the first argument
// Thus, in a class decalaration of operator function, we give no arguments in parenthesis for unary operator,
// and only one argument for binary operator.


int main(){
    Complex n1, n2;
    n1.set_values(3,4);
    n2.set_values(-8,4);
    
    cout<<"n1 = ";
    &n1;
    cout<<"n2 = ";
    &n2;

    cout<<"Addition =";
    &(n1+n2);
    cout<<"Multiplication =";
    &(n1*n2);
    
    return 0;
}