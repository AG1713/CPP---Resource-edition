# include<iostream>
using namespace std;

class this_class{
    int a;
    
    public:
    void setdata(int a){
    this->a = a; // Here, the input argument has the same name as the class variable. If this is executed as 'a=a;', it will return a garbage
    // value. To avoid this, we use 'this'. The 'this' pointer points at the object of the class. As a result, the first 'a' with this is
    // the one declare in the class and the 'a' next to it is the argument the the function.
    }

    void getdata(){
        cout<<"The a part is "<<a<<endl;
    }

    this_class plusdata(int x){ // For some reason, there was a '&' in between 'this_class' and 'plusdata' and it worked fine
        a = x+1;
        return (*this); // By doing this, we can return the output as an object

    }
};


int main(){
    this_class obj1;
    obj1.setdata(23);
    obj1.getdata();
    obj1.plusdata(5).getdata(); // Now that the output of plusdata is an object of the class, we can use methods defined in the class on it.
    obj1.getdata(); // So the object is edited



    // Conclusion
    /*
    'this' is always used in a class. Some marks gone in insem OPPs exam...
    'this'keyword always refers to the class which we are are. When we are in a object, it is obvious that we are refering to the
    variables of the object itself. However, some cases may occur when it is not clear if we are calling the variable of the
    object or any other variable; like the example mentioned above, where the parameter name of the function and the variable
    name of the object is same. This is one of the few cases where we use 'this'.
    THIS IS VERY MUCH SIMILAR TO THE 'self' ARGUMENT IN PYTHON.
    */

    return 0;
}