# include<iostream>
using namespace std;

class Base{
    private:
    int a;

    protected: // Now this is another type where these protected members can be inherited, but cannot be accessed like public members
    // This means that the 'Derived' class can access these members, but an  object cannot.
    int b;
    public:
    Base(void){
        a = 5;
        b = 4;
    }
};

class Derived: protected Base{

};
/*
Now the above visibility mode is aspecial case

                        Private derivation  Protected derivation    Public derivation
1. Private members      Not inherited       Not inherited           Not inherited
2. Protected members    Private             Protected               Protected
3. Public members       Private             Protected               Public

derivation = visibility

*/


int main(){
    Base obj1;
    // cout<<obj1.b<<endl; This gives us error since protecte members cannot be accessed outside the class.
    // Even if we made visibility of the derived class to public, it will remain same since
    // PROTECTED MEMBERS CANNOT BE CONVERTED INTO PUBLIC BY MEANS OF VISIBILITY.

    return 0;
}