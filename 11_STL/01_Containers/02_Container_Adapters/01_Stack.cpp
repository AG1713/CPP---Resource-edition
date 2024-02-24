# include<iostream>
# include<stack>
using namespace std;

// Last In First Out Data structure

int main(){
    stack<string> s;

    s.push("This");
    s.push("That");
    s.push("Then");
    
    cout<<"Top element : "<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<"Top element : "<<s.top()<<endl;
    cout<<s.size()<<endl;


    return 0;
}