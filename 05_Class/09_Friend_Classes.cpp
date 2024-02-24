# include<iostream>
using namespace std;
// Friend Class

// Consider two classes
class Class2; // Idk why for some reason, erasing this line changes nothing.

class Class1{
    int n1, n2;
    // The above are private variables
    
    public:
    void setdata(int p,int q){
        n1 = p;
        n2 = q;
    }


    friend class Class2; // This is how to declare a class as friend.
};

class Class2{
    public:
    void display(Class1 x){
        cout<<"The two parameters are : "<<x.n1<<", "<<x.n2<<endl;
    }
};



int main(){
    Class1 obj1;
    obj1.setdata(1,3);

    Class2 obj2;
    obj2.display(obj1);
    return 0;
}