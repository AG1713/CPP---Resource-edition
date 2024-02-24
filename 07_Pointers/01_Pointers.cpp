# include<iostream>
using namespace std;

int main(){
    // Pointer is a variable which represents the memory location of some other variables.
    // The purpose of pointers to hold the memory location and not the actual value.
    int a = 4;
    int *b = &a; // Now here, b is a pointer
    // You can also do
    // int *b;
    // b = &a;
    // Here,
    // & --> 'Address of' operator
    // * --> Dereference (value of) operator

    // Now the following gives us the same result
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // But if we did this,
    cout<<"The value of a is "<<*b<<endl;
    cout<<"\n\n";


    // ***Pointer to pointer***
    int **c = &b;
    cout<<"Address of b is "<<&b<<endl;
    cout<<"Address of b (and value of c) is "<<c<<endl;
    cout<<"Value of c is "<<*c<<endl;
    cout<<"Value of value of c is "<<**c<<endl;

    // Practice
    // Points to be noted are,
    // 1) int (variable_type) and int* (variable_type*) are different things, where int is used as normal and int* is used for storing address.
    // 2) Above we stored the address of an 'int' type of variable using 'int*'.  We can also do the same for different type of variables. For
    //    Example, we can store the address of a 'float'type of varible by using 'float*'


    float x;
    x=4.4;
    float* y;
    y = &x;
    cout<<y<<" is the value of variable 'y'"<<endl;
    cout<<*y<<" is the value of variable '*y'"<<endl;



    cout<<"\n\n"<<endl;







    cout<<"\n\n"<<endl;

    // 'new' keyword (it is both a keyword and a operator)
    // By using this keyword, we can dynamically create new integer, float, string etc.
    int *p1 = new int(5);
    float *p2 = new float(5);
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<"\n\n"<<endl;
    // Similarly, we can do this with arrays too,
    int *arr1 = new int[4];
    arr1[0]=2;
    // We can also do this
    *(arr1+1)=4;
    *(arr1+2)=1;
    arr1[3]=56;
    // Idk, why we are doing 'arr1' here and not '*arr1'

    cout<<arr1<<endl;
    cout<<*arr1<<endl;
    cout<<arr1[0]<<endl;
    cout<<arr1[1]<<endl;
    cout<<arr1[2]<<endl;
    cout<<arr1[3]<<endl;


    // 'delete' operator (it is both a keyword and a operator)
    delete[] (arr1); // 'delete' or 'delete[]', idk why entire array doesn't get deleted
    cout<<"Marking"<<endl;
    cout<<arr1[0]<<endl;
    cout<<arr1[1]<<endl;
    cout<<arr1[2]<<endl;
    cout<<arr1[3]<<endl;


    return 0;
}