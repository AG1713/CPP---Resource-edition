# include<iostream>
using namespace std;

// You can create a class in another class

class A{
    private:
    int num=5;

    public:
    A(){};// Default contructor (covered later)
    int publ_num=6;

    class mini_A{
        public:

        int num1=7;

        // This class can access all the data members of the outside class
        // For eg
        int num2;

        mini_A(){}; // Default contructor (covered later)

        mini_A(A obj){ // This is a contructor, covered later
            cout<<obj.num+2<<endl;
            cout<<obj.publ_num+2<<endl;
        }

    };
    mini_A ob1;
    // (A::ob1).num1=8; // You can create objects of this nested class, but for some reason, cannot access individual elements ig
};

int main(){
    A obj1;
    cout<<obj1.publ_num<<endl;

    // cout<<obj1.num1<<endl; // You cannot directly access public members of this nested class in main tho, u need to create an object

    A::mini_A obj2; // Like this, using insertion operator
    cout<<obj2.num1<<endl;
    cout<<obj2.num2<<endl;
    return 0;
}