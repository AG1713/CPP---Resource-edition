# include<iostream>
using namespace std;
// This is basics of virtual functions

class BaseClass{
    public:
    int var_base=1;
    virtual void display(){// This is a virtual function
    /*Here, what happens is that by adding the virtual keyword (thus, by making the function a virtual function), we said that
    if the pointer of type of this class (base class) points another object of other (derived) class, make it such that
    while overloading of functions, the derived class gets the prefernce. Thus, logically it can be said that the virtual
    keyword make it such that it lowers it prefernce, somewhat similar to what we observed in resolving the abiguity
    during inheritance (In A--->(B,C)--->D type of example)*/
        cout<<"Displaying Base class variable var_base :- "<<var_base<<endl;
    };
};


class DerivedClass:public BaseClass{
    public:
    int var_derived=2;
    void display(){
        cout<<"Displaying Base class variable var_base :- "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derived :- "<<var_derived<<endl;
    }
};

int main(){
    BaseClass *baseclass_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseclass_pointer = &obj_derived;
    baseclass_pointer->display();

    return 0;
}