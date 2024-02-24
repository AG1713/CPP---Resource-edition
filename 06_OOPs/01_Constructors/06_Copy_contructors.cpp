# include<iostream>
using namespace std;
// Interview topic

class Numbers{
    int a;
    public:

    Numbers(){
        a=0;
    }

    Numbers(int num){
        a = num;
    }

    Numbers(Numbers &obj){
        //This is a copy contructor. During its call, if any of the parameter is an object, the output object will resemble exactly with the
        // input object

        // IMPORTANT
        // When no copy contructor is found and still we run the program, the compiler makes its own copy of copy contructor, thus no errors.

        cout<<"Copy Contructor called"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The number is "<<a<<endl;
    }
};

int main(){
    Numbers x, y, z(45);
    x.display();
    y.display();
    z.display();

    Numbers z1(z); // This is the calling of a copy contructor, whether defined or not.
    z1.display();
    // THE SYSTEM FIRST CHECK FOR ANY COPY CONSTRUCTOR, IF FOUND, IT DOESN'T MAKE A NEW COPY CONTRUCTOR ITSELF.
    // IF OUR COPY CONTRUCTOR (ANY CONTRUCTOR WITH SINGLE OBJECT OF SAME CLASS AS A PARAMETER) DOES'NT EXACTLY COPY AN OBJECT,
    // THE COMPILER STILL CONSIDER IT AS A COPY CONTRUCTOR.
    // For example, if in our copy contructor, we replace obj.a to obj.a+1, the code will run without errors.
    // Tbh it shouldn't be called a copy contructor afterall.


    // Invoking of copy contructor
    // A copy contructor is also invoked in the below scenario
    Numbers z2 = z;
    z2.display();
    // Consider this
    // Numbers z3;
    // z3 = z;
    // This will not work. The reason is that in the prior case, we made a new object and we assigned the properties of another
    // object WHILE its creation, in the later case, the object is already created,a dn thus it doesn't work.


    return 0;
}