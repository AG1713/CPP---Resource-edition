# include<iostream>
using namespace std;

class B{};

class D1:public B{};
class D2:public B{};

int main(){
    D1 d1;
    D2 d2;
    try{
        throw d1;
    }
    catch(D1 obj){
        cout<<"Derived class 1"<<endl;
    }
    catch(B obj){
        cout<<"Base class"<<endl;
    }

    try{
        throw d2;
    }
    catch(B obj){
        cout<<"Base class"<<endl;
    }
    catch(D2 obj){
        cout<<"Derived class 2"<<endl;
    }
    // This is because, the relationship of a derived class with a base class is 'is a' relationship
    // Thus, incase of d2, the compiler identifies d2 as an object of base class, thus the catch of
    // the base class is run

    // However, none of this work if class is derived privately.
    


    return 0;
}