# include<iostream>
using namespace std;

// Destructor never takes an argument, nor takes a value.
// It is executed everytime an object is destroyed.


int count = 0; // Global variable

class num{
    public:
    num(){
        count++;
        cout<<"This is is time when contructor is called for object number "<<count<<endl;
    }

    // Making a destructor
    ~num(){
        cout<<"This is the time when destructor is called for an object number "<<count<<endl;
        count--;
    }
};


int main(){
    cout<<"We are inside of our main function."<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    // After this bracket the scope of the object ends and the object gets destroyed, thus destructor executes.


    cout<<"Back to main"<<endl;
    

    return 0;
}

// This is all about destructor.