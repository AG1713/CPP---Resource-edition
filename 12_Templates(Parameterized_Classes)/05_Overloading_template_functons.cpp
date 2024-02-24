# include<iostream>
using namespace std;

template<class T>
class abc{
    public:
    T data1;

    abc(T a){
        data1 = a;
    }
    
    void display();
};

template<class T> // We have to type or mentiion this again.
void abc<T> :: display(){
        cout<<data1<<endl;
    }


// Now, say we make a function
void func1(int a){
    cout<<"This is the 'int' version of func1(). Value of a is "<<a<<endl;
}

template<class X>
void func1(X a){
    cout<<"This is the templatized version of func1(). Value of a is "<<a<<endl;
}
void func1(char a){
    cout<<"This is the 'char' version of func1(). Value of a is "<<a<<endl;
}



int main(){
    abc <int> obj1(7);
    obj1.display();
    abc <float> obj2(7);
    obj2.display();

    // -----------------------------------

    cout<<endl;
    cout<<endl;

    func1(4);
    func1('k');
    func1(7.34);

    // This is the main topic of this program
    // The exact matches take highest priority, and thus if not matched, overloading occurs.

    return 0;
}