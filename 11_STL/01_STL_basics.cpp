// STL stands for Standard Template libraries

// It consists of 3 parts
/*
Containers :- It stores data.
Types of containers :-
1) Sequence Container :        Stores data in a linear fashion. Eg. Vector, List, Dequeue,etc
2) Associative containers :    Stores such that we can directly access. Eg. Dictionary, set, map, etc
3) Derived Containers :        Made from using either or both of the previously mentoned types of containers. Helps in real world
                               modelling.


Algorithms :- A process to do something.

Iterators :- Object which points to an element of container.


*/
# include<iostream>
# include<array>
using namespace std;

int main(){
// Array can be made like this using STL (note we imported <array>)
    array<int, 4> arr1 = {0,1,2,3};

    // Some functions of this array
    cout<<arr1.size()<<endl;
    cout<<arr1.at(2)<<endl;
    cout<<arr1.empty()<<endl;
    cout<<arr1.front()<<endl; // Returns first element
    cout<<arr1.back()<<endl; // Returns last element


    
    return 0;
}