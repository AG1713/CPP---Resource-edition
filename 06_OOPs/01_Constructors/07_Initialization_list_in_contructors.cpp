# include<iostream>
using namespace std;
// By following a certain syntax, we can easy initialize values of variables
/*
Syntax for initialization list in contructor :-
contructor(argument_list) : initialization-section
{
    assignment+other code
}
*/

// Eg

class Test1{
    int a;
    int b;

    public:
    Test1(int i, int j): a(i), b(j) // We can also do a(1+j), b(2*j) etc
    {
        cout<<"Contructor is now doing its job"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

class Test2{
    int a;
    int b;
    int c;

    public:
    // We can also do this
    // Test2(int i, int j): a(i), b(a+j) // The output will be 3 and 8
    Test2(int i, int j): b(j), a(i+b) // This will return a garbage value of a
    // This is because a will be initialized first
    {
        // We can obvioously do this
        c = 4;
        cout<<"Contructor is now doing its job"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};


int main(){
    
    Test1(3,5);
    Test2(3,5);

    return 0;
}