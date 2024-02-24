# include<iostream>
using namespace std;

// U can give new meanings to operators through operator overloading
// Note thhat this concept is called operator overloading since u cannot create new operators

// Syntax
// <return type> operator <symbol> (<arguments>){
//     <body>
// }



// But there are some rules
/*
1. Only existing operators can be overloaded. Thus you cannot create new operators.
2. The basic meaning of the operator cannot be changed.
3. It is not posible to change operator's precedence.
4. You cannot overload the following operators --> sizeof(), . , :: , ?:
5. Overloaded operator must have one operand that is userdefined type.
6. The operators '=', '->', '()', and '[]' cannot be overloaded as friend function.
*/

// Overloaded operators must be either,
// 1) Non satic member function of a class
// 2) Atleast one parameter should be a class or an enumeration


// Types of operators
// 1) Unary operators - Operators which take only one operands. eg, !, ~ etc.
// 2) Binary operators - Operators which take two operands. eg, +, -, * etc.
//                       Binary arithmetic operators must reutrn a value.

// Note that +, - are both unary and binary operators.
// The operands are mentioned in parenthesis '()'.


class Imaginery{
    private:
    int real;
    int imaginery;

    public:
    Imaginery(){
        real = 0;
        imaginery = 0;
    }
    Imaginery(int r, int i){
        real = r;
        imaginery = i;
    }

    int get_real(){
        return real;
    }
    int get_imaginery(){
        return imaginery;
    }

    void operator!(){
        // Overloaded inside class thus no parameter given, the object itself is passed as a parameter
        cout<<real<<"+"<<imaginery<<"i"<<endl;
    }

    // Do not cause abiguity!
    // void operator+(Imaginery b){
    //     real = real+b.real;
    //     imaginery = imaginery+b.imaginery;
    //     !this;
    // }

};





void operator+(Imaginery a, Imaginery b){
    Imaginery c(a.get_real() + b.get_real(), a.get_imaginery() + b.get_imaginery());
    
    !c;
}







// If operator is declared outside a class, it takes one arguent. Similarly, binary operator takes
// two arguments
// But if the operator is declared inside the class, it takes the object of that class as an argument by default.
// So call might seem same, but while declaring, we need to give one parameter less, since the parameter is the
// same class object.
// For eg, a unary operator will take no parameters and a binary ooperator will take only one argument, if
// defined in a class.


int main(){

    Imaginery num1(4,2);
    Imaginery num2(87,4);

    Imaginery num3;
    num1+num2;
    !num3;
    
    return 0;
}