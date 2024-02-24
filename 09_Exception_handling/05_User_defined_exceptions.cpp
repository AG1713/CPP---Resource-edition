# include<iostream>
# include<cstring>
using namespace std;

// Most of the exceptions that we need to handle in C++ are of class type.
// Thus we can make a class and throw it's ibject as an exception.

class My_exception{
    public:
    char str[50];
    int num;
    My_exception(){
        *str = 0;
        num = 0;
    }
    My_exception(char *s, int i){
        strcpy(str,s);
        num = i;
    }
};


int main(){
    int a;
    // Testing if a number is negative or positive
    try{
        cout<<"Enter a positive number :";
        cin>>a;

        if(a<0){
            throw My_exception("It's a negative number",a);
        }
        else{
            cout<<"It's a positive number"<<endl;
        }
    }
    catch(My_exception obj){
        // catch an error
        cout<<obj.str<<": ";
        cout<<obj.num<<endl;
    }


    return 0;
}