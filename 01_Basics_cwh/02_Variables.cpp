# include<iostream>
using namespace std;

int glo = 6; // This is a global variable
int b1 = 45;

void disp(){ // Ignore this function at start.
    cout<<glo<<"\n";
}

int main(){    
    // Variables are containers to store our data.
    // There are different types of variables on basis of type of the data, like int, float, characters etc.

    // The variable declaration refers to the part where a variable is first declared or introduced before its first use.
    // A variable definition is a part where the variable is assigned a memory location and a value.

    int num0; // This is variaable declaration.
    num0 = 5; // This is variable definition.
    int num1 = 4; // THis is variable declaration and definition
    int num2 = 7;
    cout<<"Answer is :"<<num1 + num2<<"\n"; // Adding \n makes program to go to new line to print.
    // this is how to define a variable, for example.
    // Now the given variable 'num1' is of type integer, for different types of variables.
    
    

    /*
    // VARIABLE SCOPE
    // The part in which the variable is available is called scope of variable.
    // Variables are of 2 types, global and local.
    // Global are defined in main code, and local belongs in a function.
    */
    int glo = 9; // This is a local variable.
    // Now if we can call glo, local variable glo will be accessed, showing that local variable has precendence.
    cout<<glo<<"\n";
    // Now if
    glo = 76;
    cout<<glo<<"\n"; // So now we updated the local variable.
    // Now if we did call a function outside the main, it will call global variable, eg
    disp();

    // Accessing global values
        int a1,a2,b1;
    cout<<"Enter the value of a1"<<endl;
    cin>>a1;
    cout<<"Enter the value of a2"<<endl;
    cin>>a2;
    b1 = a1+a2;
    cout<<"a1 +a2 = "<<b1<<endl;
    // Now here b1 already has a value, which is globaly defined.
    // BUT HERE WE GET VALUE OF LOCAL b1. TO GET VALUE OF GLOABAL b1, USE '::'
    cout<<"Local b1 = "<<b1<<" and Global b1 = "<<::b1<<endl;
    


    // Type of datatypes:-
    /*Built-in data types
    1) integer (int)
    Normal integers, without decimal
    2) floating point (float)
    Normal numbers with points.
    3) double (double)
    It is improvised float with more accuracy.
    4) character (char)
    It stores alphabets in " ".
    5) boolean (bool)
    It is simple True or False.
    
    User definied datatypes:-
    Struct
    Union
    Enum

    Derived data types:-
    Array
    Function
    Pointer
    */
    //Examples
    int a = 5;
    int b = 8;
    cout<<"Value of a is : "<<a<<" "<<"\nValue of b is : "<<b;
    // Or else u can write in same line as,
    int ch = 6, d = 7;
    cout<<"\n"<<ch<<" "<<d;

    // Now character datatype example
    char j = 'h', k =  'ud';
    cout<<"\n"<<j<<"\n"<<k<<"\n"<<endl;
    // Now note we have an unexpected output, 'd' and not ud.
    // boolean
    bool h = true;
    cout<<h<<"\n"; // This returns 1, if false, returns 0.

    // So now There are some rules of defining a variable.
    /*
    1) You can use 1 to 255 characters.
    2) First caracter must be a alphabet, not numbers or symbols (_).
    3) Variable names are case sensitive.
    4) Space sensitive, variable name cannot contain spaces.
    5) No special characteres except '_'.
    6) No use of reserved keywords (google).
    */





    // ************Literals************
    float c1 = 32.34;
    long double c2 = 34.32;
    cout<<"Value of c1 is "<<c1<<" Value of c2 is "<<c2<<endl;
    // Now by default any decimal number, say 45.781, is assumed to be a double data type and not float.
    // So to convert it into float, we have to add an 'f', it becomes a floating point data type.
    // Similarly, for other data-types, typecasting alphabet is 

    // Also u can use these alphabets both as capital and small, it works same
    
    
    // To prove this,
    cout<<"The size of 34.43 is "<<sizeof(34.43)<<endl;
    cout<<"The size of 34.43f is "<<sizeof(34.43f)<<endl;
    cout<<"The size of 34.43F is "<<sizeof(34.43F)<<endl;
    cout<<"The size of 34.43l is "<<sizeof(34.43l)<<endl;
    cout<<"The size of 34.43L is "<<sizeof(34.43L)<<endl;
    // Note that
    // size of float = 4
    // size of double = 8
    // size of long double = 12


    // ******************Reference variables********************
    // Now consider a situation where u want to call a value by using two or more names, here we use refernce variables.
    float d1 = 23312;
    float & d2 = d1;
    // Here we are calling same value but by using different variables d1 and d2.
    cout<<"Value of d1 is "<<d1<<endl<<"Value of d2 is "<<d2<<endl;

    // ******************Typecasting*********************
    float e1 = 43.4;
    cout<<"Value of e1 is "<<e1<<" and size it takes is "<<sizeof(e1)<<endl;
    cout<<"Value of e1 is "<<(int)e1<<" and size it takes is "<<sizeof((int)e1)<<endl; // Thus we successfully converted
    // e1 into into int from float. NOTE that size of int and float is same so here both are 4.
    // We can also write int(a) or (int)a


    // *****************Constants*************************
    int f1 = 76;
    cout<<"The value of f1 was "<<f1<<endl;
    f1 = 45;
    cout<<"The value of f1 is "<<f1<<endl;
    // Note that here we can change the value of f1.
    // But sometimes we have to ave constant value for f1 variable.
    // For this we can use,
    const int f2 = 5;
    cout<<"The value of f2 is "<<f2<<endl;
    // f2 = 6; so this is an error statement, since we cannot modify constant values.
    // Constant variables are applicable for all data types.


    // *******************Strings***************************
    // STRINGS ARE MUTABLE IN C++
    // We can make a string as,
    string str1;
    str1 = 'e';
    cout<<str1<<endl;

    string str2;
    str2 = "regrdsv";
    cout<<str2<<endl;


    // Something interesting
    char kds = 3;
    cout<<kds<<endl;

    int fjw = 'A';
    cout<<fjw<<endl;
    // Yes, they both accept or return ASCII values


    // NOTE THAT STRINGS WITH SINGLE CHARACTERS AND MULTIPLE CHARACHTERS ARE DEFINED WITH DIFFERENT SET OF INVERTED COMMAS




    // GET TO KNOW WHAT IS A GARBAGE VALUE AND WHY INITIAL VALUE OF ANY INT, IF NOT SET WITH A VALUE ALREADY IS 4200187.


    return 0;
}