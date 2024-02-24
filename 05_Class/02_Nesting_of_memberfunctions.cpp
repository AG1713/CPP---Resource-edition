#include <iostream>
using namespace std;


// Nesting of member functions:
// A member function can be called by using its name inside another member function 
// of the same class is known as nesting of member functions.


// Say we create a class
class sample
{
    string s;
private:
    void ones(void);

public:
    void read(void);
    void verify(void);
    void choice(void);
};



void sample ::read(void)
{
    cout << "Enter  binary number:- ";
    cin >> s;
};
void sample ::verify(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "The number is invalid" << endl;
            exit(0);
        };
    };
    choice(); // This is called nesting of member functions in C++.
            // Above, we called a member of the class in another member.
}
void sample :: choice(void){
    string options;
    cout<<"Do u want it's ones compliment?(yes or no are only valid options)"<<endl;
    cin>>options;
    if (options == "yes"){
        ones();
    }
    else if (options == "no")
    {
        exit(0);
    }
    
};
void sample :: ones(void){
    string c;
    for (int i=0; i<s.length(); i++){
        if ((s.at(i))=='0'){
            (s.at(i)) = '1';
        }
        else if ((s.at(i))=='1'){
            (s.at(i)) = '0';
        }
    };
    cout<<"The one's compliment for the entered binary is :"<<s<<endl;
};




int main()
{
    sample b;
    b.read();
    b.verify();

    return 0;
}

// HOMEWORK
// Now do 2's compliment using classes and recursive functions.