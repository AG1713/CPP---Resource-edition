# include<iostream>
# include<exception>
using namespace std;

void my_unexpected(){
    cerr<<"my_unexpected called"<<endl;
    throw 0;
}

void function() throw(int, double){
    throw("Hello"); // Somehow it works this way too.
}

int main(){
    set_unexpected(my_unexpected);
    // Whenever an unexpected exception occurs, this function is run and then we continue with the same flow.
    // For eg, now here, when 'function' throws a string, 'my_unexpected' runs and
    // we jump to the catch statment according to the data type of the thrown value of the unexpected function

    try{
        function();
    }
    catch(int){
        cout<<"Caught using int"<<endl;
    }
    catch(double){
        cout<<"Caught using double"<<endl;
    }


    return 0;
}