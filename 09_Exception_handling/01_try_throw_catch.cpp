# include<iostream>
using namespace std;
// There is a difference between an error and an exception. Exception can be handled, errors are resolved

// For exception handling in C++, we use try-throw-catch.



int main(){
    // Say, you program return division of two numbers, in such a case, if denominator is zero, we can call it an exception
    float numo, deno;
    cout<<"Enter the value of numerator :";
    cin>>numo;
    cout<<"Enter the value of denominator :";
    cin>>deno;

    try{
        int num = 9;
        if(deno == 0){ // This condition can be called as the 'exception'
            throw deno; // We simply throw away the deno (idk what do they mean by that)
            // However, after this 'throw' line, the program jumps directly to catch
        }
        cout<<"Answer :"<<numo/deno<<endl;
    }
    catch(float x){ // The thrown value 'deno', is caught here.
        // Note the data type; after calue of deno is thrown, it is caught by specifying its data type.
        cout<<x<<" is not a valid value for denominator."<<endl;
        // After this statment, we can clearly see that an exception is handled.
        
        
        // We could have done this with simple if-else statements too, however, this approach is preffered and we
        // would learn further about why this is used and how does it work as a whole.
    }
    // cout<<num<<endl; // ERROR LINE: The try block is a separate block, anything defined there is local.

    cout<<deno<<endl; // Note how the value of deno still remains the same, even if an exception.
    // You can instead change the value of deno to avoid such cases (for example if your code seiously doesn't work with
    // a particular value)
    
    // Note that if i changed the 'deno' after throw to a floating point number, (by typecasting) the program still
    // works and we get the entered float number in the catch block.

    return 0;
}