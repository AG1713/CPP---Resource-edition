# include<iostream>
using namespace std;

// Stream is basically a channel on which data flow from sender to receiver
// Data can be sent out from the program on an output stream or received int =o
// the program on an input stream


// A library is a collection of class and functions in C++.
// The cin and cout are basically objects of 'istrea_withassign' and 'ostream_withassign' classes

// Stream Errors
// When error occured during input or output operations, the errors are reported by stream state.
// ios defines some member functions through which state of a stream can be defined
// Eg
// bool ios::good()
// bool ios::bad()
// bool ios::eof()
// bool ios::fail()
// bool ios::clear()



int main(){
    // Eg
    int num1;
    cout<<"Enter a number"<<endl;
    cin>>num1;
    if(cin.good()==0){
        cout<<"Invalid number"<<endl;
    }
    
    
    return 0;
}