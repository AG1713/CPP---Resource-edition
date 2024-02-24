# include<iostream>
# include<fstream>
using namespace std;

// File :- Sample_file2.txt

int main(){
    ofstream fout("Sample_file2.txt");
    string name;
    cin>>name;

    fout<<"The name is "+name; // For some reason, only first word is entered
    fout.close(); // Seems familiar?!
    // So, comparing this with python, here for some reason we use '<<' instead of '='
    // Secondly, when we named the object, it was just like 'fi = open(<filename.txt>) (if syntax is not wrong)
    // So here we have the object as the name of the file and not as a function.

    ifstream f1("Sample_file2.txt");
    string content;
    f1>>content;
    cout<<"The content of the file is : "<<content<<endl;
    f1>>content;
    cout<<"The content of the file is : "<<content<<endl;
    f1>>content;
    cout<<"The content of the file is : "<<content<<endl;
    f1>>content;
    cout<<"The content of the file is : "<<content<<endl;


    return 0;
}