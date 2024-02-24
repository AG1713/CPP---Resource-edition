# include<iostream>
using namespace std;

inline int product(int a, int b){ // We use 'inline' for this.
    int c = a*b;
    return c;
}

int percent_intr(int amount, float percent=10){
    return (amount*(percent/100));
}

int const_eg(const char* q){
    // Here in this function, q cannot be changed may it be any operation n the function.
}

int fact(int n){
    if ((n==1)||(n==0)){
        return 1;
    }
    else if(n<0){
        cout<<"not able to be calculated."<<endl;
    }
    else{
        return n*fact(n-1);
    }
}

// int fibo(int n){
//     if (n<2){
//         return 1;
//     }
//     else{
//         return fibo(n-2)+fibo(n-1);

//     }
// }

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return (a+b);
}

int add(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return (a+b+c);
}

int main(){
    // **************************Inline functions*****************************
    // Sometimes, say a function of simple multiplication, when called many times, execute the same
    // process again and again which consumes a lot of time. For this reason we use in-line  functions.
    // These are nothing but the answer of the function gets stored in cache and then whenever function
    // is called it is replaced by its answer.
    // Eg above int main.
    int x = 7, y = 8;
    cout<<"Their product is "<<product(x,y)<<endl;
    cout<<"Their product is "<<product(x,y)<<endl;
    cout<<"Their product is "<<product(x,y)<<endl;
    cout<<"Their product is "<<product(x,y)<<endl;
    cout<<"Their product is "<<product(x,y)<<endl;
    cout<<"Their product is "<<product(x,y)<<endl;
    // Inline functions may seem a good idea but prevent using it on big functions or else a lot of data
    // will be stored in cache which will not be suitabe for device.
    // Don't use incase of recursive,static functions or using loops.




    // *************************Types of arguments***************************
    // 1) Default arguments
    // Consider the function percent_intr
    cout<<"The Total value of interest is "<<percent_intr(1000,13)<<endl; // Here the function runs normally
    cout<<"The Total value of interest is "<<percent_intr(1000)<<endl; // Here due to default argument,
    // second parameter is directly taken to be 10.
    // IMP note is default arguments are to be passed at very last in both functional and actual parameters.

    // 2) Constant arguments
    // - Done to set a constant value of a argument.
    // Refer to the function const_eg







    // ********************************Recursive Functions*******************************
    // Recursive functions are normal functins but it calls itself in its body, thus a sub-task is made
    // executing the body of same function but with different functions.
    // Example of such a function is fact.
    int inp;
    cout<<"Enter a number of which factorial is to be calculated."<<endl;
    cin>>inp;

    cout<<"The factorial of "<<inp<<" is "<<fact(inp)<<endl;

    // Another example is fibonacci series
    // int num;
    // cout<<"How many members of fibonacci series do you want?";
    // cin>>num;

    // for (int i = 1;num; i++){
    //     cout<<fibo(i)<<" "; // DO NOT RUN, TO BE FIXED.
    // }


    // **************************Function overloading*****************************
    // Refer function add
    //  Consider the case given below
    cout<<"Addition of 4, 5 is "<<add(4,5)<<endl; // Here, first function of add is used.
    cout<<"Addition of 4, 5, 6 is "<<add(4,5,6)<<endl; // Here, second function of add is used.
    // Thus, function is selected directly on the basis of arguments, this is called functional overloading.


    // **************************Passing an Array**********************************

    /*
    You cannot do it the normal way of 'arr[]' in arguments and then makeout its size inside the function. When you pass an array to a
    function, it decays into a pointer to the first element, at which point knowledge of its size is lost.
    If you want to know the size of an array passed to the function, you need to work it out before decay and pass that information
    with the array, something like:

    void function (size_t sz, int *arr) { ... }
    :
    {
        int x[20];
        function (sizeof(x)/sizeof(*x), x);
    }

    You cannot pass a multidimensional array without knowing its dimensions beforehand. Thus, you might consider making a vector

    */




    return 0;
}