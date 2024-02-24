#include <iostream>
using namespace std;

class Base
{
    int data1; // Private data, not inheritable
public:
    int data2;
    void SetData();
    int GetData1();
    int GetData2();
};

class Derived : public Base
{ // Class is derived publically.
    int data3;

public:
    void process();
    void display();
};

void Base ::SetData(void)
{
    data1 = 23;
    data2 = 54;
}
int Base::GetData1()
{
    return data1;
}
int Base::GetData2()
{
    return data2;
}

void Derived::process()
{
    data3 = data2 * GetData1();
}

void Derived::display()
{
    cout << "Data1 : " << GetData1() << endl; // data1 is inaccessible due to it being private member of 'Base' class.
    // Here, though data1 is inaccessible in 'Derived' class, the public member GetData1() can be access due to it being
    // public. Now when we run GetData1, we can access value of data1 because (possibly) during inheritance, we dont inherit
    // a copy of public members, we can through out access the public members of class.
    // This can be explained by a venn diagram of two circles' intersection. The two circles being base and derived class,
    // and their intersection being public members of base class. Note that this example doesn't avccount visibiltiy.

    cout << "Data2 : " << data2 << endl;
    cout << "Data3 : " << data3 << endl;
}

int main()
{
    Derived der;
    der.SetData(); // We can access this  function due to public inhertance from base class 'Base'.
    der.process();
    der.display();

    return 0;
}