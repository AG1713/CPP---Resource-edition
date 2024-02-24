# include<iostream>
using namespace std;

// Function having same names are overloaded
// Function overloading occur due to same function names with different number of arguments
// or different parameters of arguments or both
// Eg

int sum_this(int a, int b){
    cout<<"function 1"<<endl;
    return a+b;
}
int sum_this(int a, int b, int c){
    cout<<"function 2"<<endl;
    return a+b+c;
}
string sum_this(string s1, string s2){
    cout<<"function 3"<<endl;
    return s1+s2;
}



int main(){
    cout<<sum_this(3,6,4)<<endl; // funtion 2 overloaded
    cout<<sum_this(5,9)<<endl; // function 1 overloaded
    cout<<sum_this("Easy", "pizzy")<<endl; // function 3 overloaded

    return 0;
}