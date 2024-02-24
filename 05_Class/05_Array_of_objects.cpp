# include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;

    public:
    void setvars(void){
        salary = 112;
        cout<<"The id of the employee is :"<<endl;
        cin>>id;
    }

    void getvars(void){
        cout<<"The id of this employee is :"<<id<<" and salary is "<<salary<<endl;
    }
};

int main(){
    cout<<"Hello"<<endl;

    // Employee harry,rohan;
    // harry.setvars();
    // harry.getvars();
    // Instead of individually adding objects, we can store all objects in a array.
    // Example

    Employee fb[4];
    for (int i=0; i<4; i++){
        fb[i].setvars();
        fb[i].getvars();
    }

    // for (int j=0; j<4; j++){
    //     cout<<""<<fb[j]<<endl;
    // } // Making objects print themselves seems a problem though.




    return 0;
}