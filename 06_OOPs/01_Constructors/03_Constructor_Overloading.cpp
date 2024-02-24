# include<iostream>
using namespace std;

class Coordinates{
    private:
    int x, y;

    public:
    Coordinates()
    {
        x = 0;
        y = 0;
    };
    Coordinates(int a)
    {
        x = a;
        y = 0;
    };
    Coordinates(int a, int b)
    {
        x = a;
        y = b;
    };
    // Here we declared two constructors, so according to the number of parameters passed, the constructor will be decided.

    void display(void){
        cout<<"Coordinates : ("<<x<<","<<y<<")"<<endl;
    }

};

int main(){
    Coordinates c1;
    c1.display();
    Coordinates c2(2);
    c2.display();
    Coordinates c3(4,3);
    c3.display();
    return 0;
}