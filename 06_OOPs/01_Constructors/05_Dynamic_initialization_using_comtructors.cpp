# include<iostream>
using namespace std;

// Dynamic initialization here means deciding the contructor in real time using consructor overloading

// ASSUMING THAT RATE IS ALWAYS A WHOLE NUMBER (4% OR 0.04)

class Deposit{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
        Deposit(){} // This blank contructor is necessary because, when we look into int main, we created objects without initially providing
        // them with parameters since they have parrameterzed constructors. If this blank contructor didn't exist, the compiler would throw
        // an error since while making objects, there exist constructor but they cannot be invoked due to absence of parameters

        Deposit(int p, int y, float r); // A contructor which takes rate as a floating point.
        Deposit(int p, int y, int r); // A contructor which takes rate as a integer.
        void display();
};
// Here, the rate remains float throughout, from accepting parameters to output. The type of parameters decide the choice of contructor.

Deposit :: Deposit(int p, int y, float r){
    cout<<"Contructor 1"<<endl;
    principal = p;
    years = y;
    rate = r;

    returnvalue = principal;

    for (int i=0; i<y; i++){
        returnvalue = returnvalue*(1+rate);
    }
}

Deposit :: Deposit(int p, int y, int r){
    cout<<"Contructor 2"<<endl;
    principal = p;
    years = y;
    rate = float(r)/100;

    returnvalue = principal;

    for (int i=0; i<y; i++){
        returnvalue = returnvalue*(1+rate);
    }
}

void Deposit::display(){
    cout<<"Principal amount :"<<principal<<endl
    <<"Number of years :"<<years<<endl
    <<"Rate :"<<rate<<endl
    <<"Return Value :"<<returnvalue<<endl;
}


int main(){
    Deposit d1, d2, d3;
    int p, y;
    float r;
    int R;

    cout<<"The value of pricipal is "<<endl;
    cin>>p;
    cout<<"The number of years "<<endl;
    cin>>y;
    cout<<"The value of rate is "<<endl;
    cin>>r;
    d1 = Deposit(p,y,r);
    d1.display();


    cout<<"The value of pricipal is "<<endl;
    cin>>p;
    cout<<"The number of years "<<endl;
    cin>>y;
    cout<<"The value of rate is "<<endl;
    cin>>R;
    d2 = Deposit(p,y,R);
    d2.display();


    d3.display();
    

    return 0;
}