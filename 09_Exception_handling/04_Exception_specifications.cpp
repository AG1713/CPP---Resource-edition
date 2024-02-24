# include<iostream>
using namespace std;
// We know that functions can throw exceptions
// Exception specification is used to provide the information about the kind of exceptions that can be thrown

// This feature is discontinued since C++11, hence the warning


void throwing_func() throw(int, double){
    throw 5469;
}


int main(){
    try{
        throwing_func();
    }
    catch(int a){
        cout<<"You threw "<<a<<endl;
    }

    return 0;
}