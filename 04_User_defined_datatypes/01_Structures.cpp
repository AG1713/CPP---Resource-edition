// Structures
#include <iostream>
using namespace std;

typedef struct employee // if using shortcut write this.
{
  int eID;
  char favchar;
  float salary;
} ep; // Here genereally nothings comes at last line but if u want to call the struct in
      // short form, you can set that shortcut here.

typedef struct Another_struct
{
  int x = 1;
  void func1(int a){
    x = a;
    cout<<x<<endl;
  }
}A1;


int main()
{
  // Structure is similar to array but in array, only same type of data is stored but here
  // different type of data is stored too.
  struct employee X13;
  ep Y221; // Shortcut
  struct employee Z213;
  X13.eID = 2;
  X13.favchar = 'x';
  X13.salary = 130000.00;
  cout << "The value is  " << X13.eID << endl;
  cout << "The value is  " << X13.favchar << endl;
  cout << "The value is  " << X13.salary << endl;
  cout << "The value is  " << Z213.salary << endl;

  // We can also do this
  ep Axy90;
  Axy90 = {45, 't', 4534};
  cout << Axy90.eID << endl;
  cout << Axy90.favchar << endl;
  cout << Axy90.salary << endl;



  /* Remember that structures in C++ can also have member functions, but they are limited
  in functionality compared to classes. It's generally recommended to use classes for more
  complex data structures that require inheritance, encapsulation and abstraction, while using
  structs for simpler data containers.
  */
    // WE CAN ADD FKING FUNCTIONS IN STRUCT! But only in C++, in C, we cannot

    A1 obj1;
    cout<<obj1.x<<endl;
    obj1.func1(5);
    cout<<obj1.x<<endl;

  return 0;
}