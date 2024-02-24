# include<iostream>
using namespace std;

int main(){
    // A pointer to point any data type. Also known as 'Generic' pointer
    void *ptr;
    int a=9;
    ptr = &a;
    // No error till now
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<"(ptr == &a) :- "<<(ptr == &a)<<endl;
    // cout<<*ptr<<endl; // This line gives an error. it says, 'void* is not a pointer-to-object type.

    // Somehow typecasting pointer
    int *ptr_copy = static_cast<int*> (ptr);
    cout<<*ptr_copy<<endl;

    return 0;
}