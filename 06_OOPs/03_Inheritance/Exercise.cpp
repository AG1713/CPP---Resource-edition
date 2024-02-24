# include<iostream>
# include<math.h>
using namespace std;
/*
Create two classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs =, -, *, / and displays the rusults using another
    function.
    2. SCientificCalculator - Take input of 2 numbers using a utility function and performs any four scientific operation of your choice
    and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability impleemented.
*/
void display(int a){
    cout<<a<<endl;
}

class SimpleCalculator{
    public:
    int add(int n1, int n2){
        return (n1+n2);
    }
    int sub(int n1, int n2){
        return (n1-n2);
    }
    int mul(int n1, int n2){
        return (n1*n2);
    }
    int div(int n1, int n2){
        return (n1/n2);
    }
    friend void display(int a);
};

class ScientificCalculator{
    public:
    int power(int n1, int n2){
        return (pow(n1,n2));
    }
    float sine(float n1){
        return (sin(n1));
    }
    float cosine(float n1){
        return (cos(n1));
    }
    friend void display(int a);
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator
{
    // This is a type of multiple inheritance
};

int main(){
    HybridCalculator obj1;
    display(obj1.add(2,3));
    display(obj1.sub(2,3));
    display(obj1.div(2,3));
    display(obj1.mul(2,3));
    display(obj1.power(2,3));
    display(obj1.sine(M_PI/2));
    display(obj1.cosine(M_PI/2));
    return 0;
}