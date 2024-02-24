# include<iostream>
using namespace std;
// Inshort, we are creating multiple parameters of template.

template <class T1, class T2>
class qwerty{
    public:
    T1 data1;
    T2 data2;


    void display(){
        cout<<this->data1<<endl<<this->data2<<endl; // !
    }
};

int main(){
    qwerty<int, char> obj1;
    obj1.data1 = 3;
    obj1.data2 = 'a';
    obj1.display();

    
    return 0;
}