# include<iostream>
using namespace std;


template <class T1=int, class T2=float> // If no parameter data types are given in angular brackets,
// the class takes these mentioned as their default data types.
class xyz{
    public:
    T1 a;
    T2 b;

    xyz(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){
    xyz <> obj1(4,6.3);
    obj1.display();
    cout<<endl;

    xyz <string, int> obj2("rg",6.4);
    obj2.display();
    cout<<endl;

    xyz <string, int> obj3("rg",'A'); // This should return a garbage value, but somehow it gives ASCII number of the character
    obj3.display();
    cout<<endl;
    
    return 0;
}