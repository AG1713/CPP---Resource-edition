# include<iostream>
# include<iomanip>
using namespace std;

int main()
{
    // For using manipulators like setw, we need to include iomanip.

    int a = 4, b = 89, c = 456;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"Value of c is "<<c<<endl;

    // With using setw
    cout<<"Value of a is "<<setw(2)<<a<<endl;
    cout<<"Value of b is "<<setw(2)<<b<<endl;
    cout<<"Value of c is "<<setw(2)<<c<<endl;
    // As we an see, it returns a right justified output on the basis of width passed in it.


    return 0;
}
