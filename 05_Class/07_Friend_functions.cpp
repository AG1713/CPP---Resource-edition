# include<iostream>
using namespace std;

// A class ideally has its set of private data which only its functions can access.
// However, if any function can access this private data but is not a part of the class, such a function is called a friend function.
// A friend function has to be defined earler in a class as friend function by following a syntax mentioned later.

// Suppose a class Complex
class Complex{
    int a, b;

    public:
    void setdata(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printdata(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

    friend Complex addcomp(Complex o1, Complex o2);
};

// Now lets make a friend function.
Complex addcomp(Complex o1, Complex o2){
    Complex o3; // Made a new object.
    // o3.a = o1.a + o2.a;
    // o3.b = o1.b + o2.b;
    
    // Or else, no since this is a friend function of the class 'Complex', we can use its functions.
    o3.setdata((o1.a + o2.a), (o1.b + o2.b)); // Here normally if this function wasnt a friend function, we would get an error since any function 
    // cannot acess private data
    return o3;
}



int main(){
    // Now when we run all this,
    Complex obj1, obj2, obj3;
    obj1.setdata(1,2);
    obj1.printdata();

    obj2.setdata(3,4);
    obj2.printdata();
    
    obj3 = addcomp(obj1, obj2);
    obj3.printdata();

    return 0;
}

/* Properties of a friend functions.
1. This type of function is not a part of the class (not in scope of the class).
2. Since it is not in the scope of class, we cannot call it by using an object.
3. This function can be invoked without any object.
4. This usually includes objects as arguments.
5. Can be declared inside public or private, any part of the class.
6. It cannot access the members of the class directly by their names and need object_name.member_name to access the member.
7. Spoiler, friend functions can access protected members too.

*/