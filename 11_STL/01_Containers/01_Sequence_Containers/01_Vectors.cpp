# include<iostream>
# include<vector> // Necessary
using namespace std;
// Vectors are similar to arrays.
// One advantage of vector is that wwe cannot resize array but we can resize vectors.
// This works as follows:
/*
Whenever the original array in vector implementation is full, a new array is created of double the size
of the original array. Now the elements from the original array are copied to the new array

Now you can say that a lot of space might remain in the new array, for eg, if our original array is of size 4
and we added 5 elements such that now in vector implementation, an array of eight is created, the rest three
spaces will not be occupied right? (Note that it EFFECTS .size(), it will show the size of te new array)
To prevent this from occuring, there is a function .shrink_to_fit() in vector such that now that new array in
vector implementation is of size 5
*/

// NOTE
/*
.size() - gives the number of elements in the vector
.capacty() - gives the capacity of the vector to store elements before another array is created in vector implementation
*/

template <class T>
void display(vector<T> &v){\
    cout<<"Displaying..."<<endl;
    for (int i=0 ; i<v.size() ; i++){
        cout<<v.at(i)<<" "; // This function points the element at the given index
        // cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v;
    vector<char> vect1(3); // character vector of lenght 4.

    
    vector<int> v1(6,3); // Return a vector having 6 elements, each having a value of 3
    vector<int> v2(v1); // 
    display(v1);
    cout<<"Capacity : "<<v1.capacity()<<"  Size : "<<v1.size()<<endl;
    cout<<endl;

    display(v2);
    cout<<"Capacity : "<<v2.capacity()<<"  Size : "<<v2.size()<<endl;
    cout<<endl;

    // For some reason, the display function gievs a black space before printing character arrai vect1

    // Displaying vect1 and vect2 will be blank

    // Vector methods
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    cout<<v.at(1)<<endl; // Give the element at the given index
    cout<<v.front()<<endl; // Returns the first element
    cout<<v.back()<<endl; // Returns the last element

    display(v);
    v.pop_back();
    display(v);

    cout<<endl;

    cout<<"Capacity : "<<v.capacity()<<"  Size : "<<v.size()<<endl;
    v.clear(); // Size becomes zero, capacity doesn't
    cout<<"Capacity : "<<v.capacity()<<"  Size : "<<v.size()<<endl;


    cout<<endl;
    cout<<endl;







    // Refer cppreference.com


    return 0;
}