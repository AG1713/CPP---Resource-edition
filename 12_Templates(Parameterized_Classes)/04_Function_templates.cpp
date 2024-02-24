# include<iostream>
using namespace std;

float avg(int a, int b){
    float avg = (a+b)/2.0; // For some reason, only 2 doesn't work here.
    return avg;
}

template <class T1, class T2>
float avg1(T1 a, T2 b){
    float avg = (a+b)/2.0; // For some reason, only 2 doesn't work here.
    return avg;
}


// Function for  swaping two variables, using templates.
template<class T>
void swap_it(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    cout<<avg(4,5)<<endl;
    printf("The average of the numbers is %.2f \n", avg1('r',8.4)); // Yes, we can use printf and yes, we can use modulus operator
    // and that .2 is the number of digits after decimal

    int x=8, y=9;
    swap_it(x,y);
    printf("The value of x is %d and the value of y is %d\n",x,y);

    return 0;
}