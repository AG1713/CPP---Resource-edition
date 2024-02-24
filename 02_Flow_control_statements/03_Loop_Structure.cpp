#include<iostream>
using namespace std;

int main(){
    // Loops in C++
    // Similar to python, there are 3 loops in C++,
        // 1. for loop
        // 2. while loop
        // 3. do while loop

    // ****************for loop*****************
    // For loop is used for repeating a simple set of instructions till a condition is achieved
    // Note that you can also have infinite for loop so beware of giving a valid condition.
    // Also, the updation part of the curly bracket is optional, you can manually give updation in the body too.
    /*
    Syntax for 'for' loop
    for(initialization; condition; updation)
    {
        loop body (C++ code)
    }
    */

    for (int i = 0; i < 7; i++){
        cout<<i<<endl;
    }
        // You can also add i++ here instead of adding it in condition of for loop]

    cout<<"Break between for and while"<<endl;



    // **************while loop******************
    /*
    Syntax for while loop
    while(condition)
    {
        loop body (C++code)
    }
    */
    int j = 1;
    while(j<65){
        cout<<j<<endl;
        j++;
    }
    cout<<"Break between while and do while"<<endl;



    // ***************do while**************
    /*
    do{
        <body>
    }while(condition);  DONT FORGET SEMICOLON
    */
    int k=1;
    do
    {
        cout<<k<<endl;
        k++;
    } while (k<23);
    cout<<"Break"<<endl;
    // Now the main difference between while and do while loop apart from syntax is that
    // in while loop, condition is checked before entering a loop whereas in do while loop,
    // condition is checked after one iteration.

    //Eg (remember that now after j and k have passed through the loop, j = 65 and k = 21)
    while (j != 65)
    {
        cout<<j<<endl;
    }
    

    do
    {
        cout<<k<<endl;
    } while (k != 23);
    // We clearly see that after one iteration, do while ends
    
    



    return 0;
}