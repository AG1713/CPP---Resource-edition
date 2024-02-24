# include<iostream>
# include<fstream>
# include<string> // This is to access 'readline()'. Works without it too for some reason.
using namespace std;

// File :- Sample_file3.txt

int main(){
    // The second method to open a file.

    ofstream out; // Defining an object of 'ofstream'
    out.open("Sample_file3.txt");
    out<<"This is me";
    out<<"This is me also";    out<<"\nThis is me also";
    out.close(); // A file always closes by itself when the program ends. However it is good practice to always manually close the file
    // by writing this.

    ifstream fin;
    fin.open("Sample_file3.txt");
    string s1, s2;
    // fin>>s1>>s2; // We can do this too, obviously
    // cout<<s1<<s2<<endl;


    // Now if we wanted to print whole content of the file, we can use 'readline()' amd while loop.
    while(fin.eof() == 0) // 'eof' stands for 'end_of_file'. It detects whther the file is closed or not
    // Probably, returns 0 for closed and 1 for open.
    {
        getline(fin, s1);
        cout<<s1<<endl;
    }

    fin.close();





    return 0;
}