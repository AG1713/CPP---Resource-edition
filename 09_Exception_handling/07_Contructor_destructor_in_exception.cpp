# include<iostream>
using namespace std;

class Test{
    static int count;
    public:
    Test(){
        cout<<"Contructor called"<<" "<<count<<endl;
    }
    Test(int y){
        cout<<"y="<<y<<" "<<count<<endl;
    }
    ~Test(){
        cout<<"Destructor called"<<" "<<count<<endl;
        count++;
    }
};
int Test::count = 100;

int main(){
    // Two cases
    // Both of these is two understand the working of classes in exception handling
    
    // Case 1
    try{
        Test obj1, obj2; // First the object is created, hence contructor of these two run
        throw 100; // We throw an int, and after this the scope of try ends, so the objects get destroyed
        // Thus, destructor is called
    }
    catch(int x){
        cout<<"Exception caught"<<endl;
    }

    cout<<endl;
    cout<<endl;

    // Case 2\
    for this, static variable is created
    try{
        throw Test(3); // Here, what happens is
        // Object of Test is created, thus contructor is called
        // However, when this object is thrown, the object doesn't get destroyed, rather a new object is passed
        // to the 'catch' block. Now this new object is same as the object thrown, hence suggests use of copy contructor

        /*
        So lets understand this creation and destruction of the objects
        Firstly, an object is created of count 102
        then another object is created which is identical to this created object. Due to static varible, we call it obj 103
        Now, when this (102) object is thrown, it in not destroyed, but its copy is passed to the catch block, where the 
        catch block is executed. After this, when the catch block is execued, there is no way to access both these
        object hence they are destroyed, bj 102 being the first one destroyed for some reason
        */
    }
    catch(Test){
        cout<<"Object caught"<<endl;
    }
    
    return 0;
}