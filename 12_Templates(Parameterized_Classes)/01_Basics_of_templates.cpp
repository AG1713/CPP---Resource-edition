# include<iostream>
using namespace std;

template <class T> // Say, this is a custom data type. It accepts any typle of variable. The 'T' here is called the parameter of the template.
// THERE IS NO SEMICOLON AFTER TEMPLATE STATEMENT
class vector{
    int size;

    public:
    T* arr;

    vector(int m){
        size = m;
        arr = new T[size];
    }
    
    T dot_product(vector &v){
        T d = 0;

        for (int i=0 ; i<size ; i++){
            d += arr[i]+v.arr[i]; // Here, even if we did 'this.arr[i]+v.arr[i]',  there would be no change.
        }

        return d;
    }
    
};

int main(){
    vector <float> v1(3);
    v1.arr[0] = 3.3;
    v1.arr[1] = 3.75; // The array round figures the value, probably floor (ignores decimal). Note that this comment is before adding template.
    v1.arr[2] = 2.6;

    vector<float> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    float a = v1.dot_product(v2);
    cout<<a<<endl;

    return 0;
}