# include<iostream>
using namespace std;


void throwing_func(){
    try{
        throw "good throw";
    }
    catch(char const* x){
        cout<<x<<endl;
        throw;
    }

    catch(char const* y){ // This isn't rethrowing
        cout<<"Why this? Whats the points???"<<endl;
    }
}

int main(){
    try{
        throwing_func();
    }
    catch(char const* x){
        cout<<"Nothing to see, nothing to do, sounds like vacation"<<endl;
        // Ig it can be said that the function is returning an exception??
    }
    return 0;
}