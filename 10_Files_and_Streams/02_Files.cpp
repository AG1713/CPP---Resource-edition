# include<iostream>
# include<fstream> // You must include this for file handling
using namespace std;



int main(){

    // To open a file, first u need to create an object of -
    // ifstream, if file is to be opened in input (read) mode
    // ofstream, if file is to be opened in output (write) mode
    // ftreamif both

    fstream f;
    f.open("Sample_file_1.txt", ios::out);
    string s1 = "This is a statement";
    f.write((char *)&s1, sizeof(s1));
    f.close();


    
    return 0;
}