# include<iostream>
using namespace std;

class sample{
    int a;
    int b;

    public:
    void setdata(int x, int y){
        a = x;
        b = y;
    }

    void getdata(void){
        cout<<"The value of a is "<<a<<" and the value of b is :"<<b<<endl;
    }

    void adddata(sample m, sample n){ // BY SPECIFYING CLASS AS VARIABLE TYPE, WE CAN INPUT OBJECTS AS ARGUMENTS IN FUNCTIONS.
        a = m.a + n.a;
        b = m.b + n.b;
    }

    // Making variables as public is not a good practice.
};


int main(){
    sample obj1, obj2, obj3;
    obj1.setdata(1,2);
    obj1.getdata();
    
    obj2.setdata(34,2);
    obj2.getdata();

    obj3.adddata(obj1, obj2); // HERE WE TOOK OBJECTS AS INPUTS.
    obj3.getdata();


    return 0;
}