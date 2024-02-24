# include<iostream>
# include<fstream> // For file-handling'

// File :- Sample_file1.txt


// The usefull classes for working with files in C++ are:
/*
1) fstreambase
2) ifstream --> derived from fstreambsae
3) ofstream --> derived from fstreambsae
*/

// In order to work with file in C++,  you have to open a file,
/* Out of many ways, there are two primary ways given below :-
1) Using the contrutor
2) Using the member function 'open()'of the class.
*/
using namespace std;

int main(){
    // Opening a file using contructor
    string st1 = "rhvo ivoivd uvvu";
    string st2;

    // ofstream out("Sample_file1.txt");
    // The 'out' here is an object and we can name anything to it, which also applies to 'in' used lateron

    // out<<st1; // Writing it

    ifstream in("Sample_file1.txt");
    // in>>st2; // Reading it (storing content in a variable)
    // cout<<st2; // Here, we only get the furst word, to access entire line, we use 'getline()'
    getline(in,st2);
    cout<<st2;
    getline(in,st2); // The number of times we enter this, the number of lines will be printed.
    cout<<st2;


    
    return 0;
}