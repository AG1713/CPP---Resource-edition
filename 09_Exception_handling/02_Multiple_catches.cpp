# include<iostream>
using namespace std;

int main(){
    // We can give multiple catch statements after one try statement
    // Eg
    int num1;
    float num2;
    cout<<"Enter the value of num1 :";
    cin>>num1;
    cout<<"Enter the value of num2 :";
    cin>>num2;
    
    try{
        if(num1==0){
            throw num1; // Note that after this, the control of program jumps to catch and
            // won't satisfy exception of num2.
        }
        if(num2==0){
            throw num2;
        }
        cout<<"num1 :"<<num1<<"\nnum2 :"<<num2<<endl;
    }
    catch(int x){
        cout<<"Value of num1 cannot be 0"<<endl;
    }
    catch(float x){
        cout<<"Value of num2 cannot be 0"<<endl;
    }

    return 0;
}