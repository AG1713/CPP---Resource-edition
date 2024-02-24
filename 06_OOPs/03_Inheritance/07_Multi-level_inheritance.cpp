#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student::set_roll_no(int r)
{
    roll_no = r;
}
void Student::get_roll_no(void)
{
    cout << "The roll number is :" << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks(void)
{
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;
    // percentage = (maths+physics)/2; will not work since maths and physics are not assigned with values yet.

public:
    void display_result(void)
    {
        percentage = (maths+physics)/2;
        get_roll_no();
        get_marks();
        cout << "Your percentage is " << percentage << "%" << endl;
    };
};

int main()
{
    /*
    Notes:
    If we are inheriting B from A and C from B (A--->B--->C)
    1. A is base class for B and B is base class for C.
    2. ABC is called inheritance path.
    */
    Result harry;
    harry.set_roll_no(420);
    harry.set_marks(94.5, 90);
    harry.display_result();
    return 0;
}