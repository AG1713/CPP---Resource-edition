# include<iostream>
using namespace std;

// Consider hybrid inheritance A--->(B,C)--->D
/*
In this example, class A is the Base class and B and C are derived from it. As a result, members of class A get trasferred to B and C.
Consider members of class A are copied to  B and C (it is still not clear whether the members are copied or directly members are used from'
base class). Now, class D is derived from B and C. As a result, members of class A which were inherieted to B and C get copied again to 
class D and we get two copies of the same members. This creates ambiguity and thus to prevent this virtual base class exist

The concept is simple. When we derive a class from another class we use word 'virtual' before or after specifying visibility modee. In this way,
the compiler prevents duplication of members of grandfather class (say) to son class.
*/

class Student{
    protected:
    int roll_no;

    public:
    void set_num(int a){
        roll_no = a;
    }
    void print_num(){
        cout<<"Your roll no. is "<<roll_no<<endl;
    }
};

class Test: virtual public Student{ // NOTE virtual
    protected:
    float maths, physics;

    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(){
        cout<<"Your result is here:\n"
            <<"Maths : "<<maths<<'\n'
            <<"Physics : "<<physics<<endl;        
    }       
};

class Sports: virtual public Student{
    protected:
    float score;

    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};


class Result: public Test, public Sports{
    private:
    float total;

    public:
    void print_result(){
        total = (maths+physics+score);
        print_num();
        print_marks();
        print_score();

        cout<<"Your total score is "<<total<<endl;
    }
};


int main(){
    Result someone;
    someone.set_num(4);
    someone.set_marks(78.5,86);
    someone.set_score(89);
    someone.print_result();

    return 0;
}