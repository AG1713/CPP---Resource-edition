# include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;

    public:
        Simple(int a, int b=9){
            data1 = a;
            data2 = b;
        }
    void printdata(void){
        cout<<"The value of data1 is "<<data1<<" and the value of data2 is "<<data2<<endl;
    }
};

int main(){
    Simple a(1,3);
    a.printdata();

    Simple c(1);
    c.printdata();

    return 0;
}