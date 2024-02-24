#include<iostream> // So this is called a header file. It enchances functionality of our code.
// The above is a system headerfile.

#include"Sampleheaderfile.h" // This is a user-defined headerfile.
// Probably the extension for headerfiles is .h

using namespace std; // Almost mandatory statement.

int main(){
    // The are two types of header files.
    /*
    1. System header files: It comes with compiler.
    2. User defined headerfiles: It is written by programmer.
    */

    // IMP Website for this is cppreference.com
    


    // *************************Operators************************
    // Same type of operators similar to python.
    // Arithmetic operators
    int a = 5, b = 2;
    cout<<"The output of a+b is :"<<(a+b)<<endl;
    cout<<"The output of a-b is :"<<(a-b)<<endl;
    cout<<"The output of a*b is :"<<(a*b)<<endl;
    cout<<"The output of a/b is :"<<(a/b)<<endl; // This is absolute division but since datatype is int, answer is int.
    cout<<"The output of a++ is :"<<(a++)<<endl; // returns a and adds one
    cout<<"The output of a-- is :"<<(a--)<<endl; // returns a and subs one
    cout<<"The output of ++a is :"<<(++a)<<endl; // adds one and returns a
    cout<<"The output of --a is :"<<(--a)<<endl; // subs one and returns a

    // Assignment operators
    // Examples are =, +=, -=, *= etc.

    // Comparision operators
    // Examples are ==, <, >, <=, >=, !=;

    // Logical operators
    // Logical and - &&
    // Logical or  - ||
    // Logical not - !(<expression>)

    // Binary operators
    // AND - &
    // OR - |
    // NOT - !
    // 2's compliment - ~
    // XOR = ^
    // << - Leftshift
        // eg. 3<<1 :- 3 - 0011, shift to left by 1, therefore, new value becomes 0110-6
        // Note that always the number is multiplied by 2 raised to n (n is digits by which we left shift) with an exception
        // The Highest significant bit denotes sign of a binary number. If 1 then sign is negative.
        // If we apply left shift on such a number such that the number has '1' at its second most significant digit,
        // the number will become negative. This might not be its only exception
    // >> - Rightshift
        // Same as left shift but we shift to right. Also, the output follows this logic -
        // When we right shift a number, the number gets divided by 2 raised to n and output is returned

        // WE MUST AVOID NIGATIVE NUMBERS IN OUTPUT OR INPUT IF WE WANT TO FOLLOW THE LOGIC OF 2 RAISED TO N IN BOTH.
        // Also, while right shift, if number is odd, the answer with first divison of two is floored and then
        // continued to divide the answer by 2s


    // Bitwise comparison operators (For later)
    // AND - &&
    // OR - ||
    // NOT - !
    // XOR - ^
    // one's + two's compliment = ~
    

    // TYPING REQUIRED


    // ******************Operator precedence*******************
    // Operator precedence meaning which operator will be preffered first in an expression.
    // When operators have same precendence, associativity is used which is reading from left to right or vice versa.
    // Refernce website :- cppreference.com


    return 0;
}
