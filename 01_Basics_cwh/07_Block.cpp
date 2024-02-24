# include<iostream>
using namespace std;

int main(){
    {
        // This is a block
    }
    int a = 3;
    // In a block, whichever variable is defined or whatever process is done, is applicatable to the inside of the block only,
    // much like local variables.
    {
        int a=7;
        cout<<a<<endl; // As expected, the local variable taken precedence over the global variable 'a'.
    }
        cout<<a<<endl;


        // ELEMENTS INSIDE THE BLOCK HAVE THEIR SCOPE INSIDE THE BLOCK ONLY.


    return 0;
}