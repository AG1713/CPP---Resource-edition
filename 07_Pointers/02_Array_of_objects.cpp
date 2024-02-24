# include<iostream>
using namespace std;

class this_class{
    int real, imaginery;
    
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginery part is "<<imaginery<<endl;
    }
    void setdata(int a, int b);
};

void this_class::setdata(int a, int b){
    real = a;
    imaginery = b;
}


int main(){
    // Firstly let's see basics
    // Like various types of variables (more like various in built class like int, float), we can create a pointer of our class too.
    this_class c1;
    this_class *ptr = new this_class;
    // this_class *ptr = &c1; // This would work the same too

    (*ptr).setdata(1,2);  // IMPORTANT!!!!
    // The parenthesis we gave to the pointer is very important since there is a precedence to the operators; something we do not know till
    // now; therefore, the '.' operator works before '*' and thus while everything seems fine, an error is raised without object

    // Now here, instead of puting parenthesis, dot operator and '*', we can all do this simply by one operator, which MAYBE eexclusive
    // to pointers.
    // The operator is '->'.
    ptr->getdata();


    cout<<"\n\n"<<endl;

    // Array of objects  TO BE CONTINUED
    // We can by default create an array of objects
    this_class* ptr1 = new this_class[3]; // Here we easily create an array of objects
    // We could have also done this,
    // this_class c2[3];
    ptr->setdata(1,23);


    int size = 2;
    this_class *ptr2 = new this_class[size];
    this_class *temp = ptr2;
    int a, b;


    for (int i=0; i<size; i++){
        cout<<"Enter the value of real and imaginery numbers :"<<endl;
        cin>>a>>b;
        ptr2->setdata(a,b);
        ptr2++;
    }

    for (int i=0; i<size; i++){
        temp->getdata();
        temp++;
    }


    return 0;
}