# include<iostream>
using namespace std;

// Go to main first before coming here.
// Making a function.
int sum(int a, int b){
    int c = a+b;
    return c;
}

// Skip if not came for function prototyping.

// Syntax for function prototype
// type function-name (arguments);
int sub(int a, int b); // So this part of code gives assurity to the program that the given function
// will be available in the code to search.
// int sub(int, int); This will work too.
// So inshort, we know that a function must exist before main in order to call it in main. By adding the above line, the code tricks such that
// the compiler thinks there is a function of that name somewhere, which shoul be where we wrote this above statement but there isn't so check elsewhere.


void g(void); // This is how to make a prototype of void function.
// void g(); This is also valid


void swap(int a, int b);
void swapedit(int *a, int *b);
void swapref(int &a,int &b);

int main(){
    // Functions
    // Functions here are similar to python. How to make a function? We already made one!
    // int main is a function. Here, return 0 means successfull execution of a program.

    // Go above main before this.

    int num1,num2;
    g();
    cout<<"Enter num1"<<endl;
    cin>>num1;

    cout<<"Enter num2"<<endl;
    cin>>num2;

    cout<<"The sum is "<<sum(num1,num2)<<"."<<endl;
    cout<<"The sub is "<<sub(num1,num2)<<"."<<endl;



    // *******************Function Prototypes**************************
    // GO before main on line 11.


    // ****************Function calling methods************************
    // - Call by reference
    // - Call by value

    // Call by reference
    // Let's make a void function for this, which swaps two variables gven to it. (below main)
    // Now if we execute the function and print to see if anything changes,
    cout<<"Value of num1 is "<<num1<<endl;
    cout<<"Value of num2 is "<<num2<<endl;
    cout<<"Break line"<<endl;
    swap(num1,num2);
    cout<<"Value of num1 is "<<num1<<endl;
    cout<<"Value of num2 is "<<num2<<endl;

    cout<<"Break line\n\n"<<endl;
    // Subtype- Call by address (pointers)
    // But nothing changes. This is because void function returns nothing.
    // So there is a trick around it. Now void function cannot give output
    // but it can definitely access ad change the memory. The point is that it may not
    // return any output, but it can change values of a memory at a particular address.
    // To show this, we use the help of pointers (since they have the variable address)
    // by creating a new function swapedit.
    swapedit(&num1,&num2);
    cout<<"Value of num1 is "<<num1<<endl;
    cout<<"Value of num2 is "<<num2<<endl;
    // Now this changes everything and we get the expected output
    cout<<"Break line\n\n"<<endl;

    // Subtype- Call by reference variables.
    // This is demonstrated by the function swapref.
    swapref(num1,num2);
    cout<<"Value of num1 is "<<num1<<endl;
    cout<<"Value of num2 is "<<num2<<endl;
    // Now due to the & operator in functional parameters, they becme reference variables and
    // directly point at the original variables thus making direct changes.
    cout<<"Break line\n\n"<<endl;



    // return method?? int &swapedit??

    return 0;
}

int sub (int a, int b){
    int c = a - b;
    // So here formal parameters a and b will take values form actual parameters num and num2.

    // Note that if the function was already down the code without function prototyping, the code would return a error.
    return c;
}
// Functional parameters :- int a and int b are functional parameters.
// Actual parameters :- num1 and num2 are Actual parameters.

// void function.
// It takes no parameters and doesn't return anything ie, it returns an error if a return statement is given in a void function.

void g(){
    cout<<"Hello Good Moring"<<endl;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapedit(int *a, int *b){ // Note we made a pointer variable here.
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}