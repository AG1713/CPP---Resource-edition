# include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var_base :- "<<var_base<<endl;
    }
};

class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var_base :- "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derived :- "<<var_derived<<endl;
    }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;


    base_class_pointer = &obj_derived; // !!!!!!!!!!!!!
    // Pointing to derived class using pointer of base class 
    // Even if the pointer is pointing to the derived class, it will bind with the function of the base class, this is called late binding.


    base_class_pointer->var_base = 23;
    base_class_pointer->display();
    // However
    // base_class_pointer->var_derived = 87; // This will throw an error
    // This is because, the pointer will execute only those which are inherited by the derived class.
    cout<<"\n"<<endl;

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived=93;
    derived_class_pointer->display(); // Here the binding occurs with the display function in the derived class.


    /*
    Now this binding of the function occurs in the run-time of the program, which is called RUN-TIME POLYMORPHISM.
    */
   DerivedClass obj3;
   obj3.display();


    return 0;
}