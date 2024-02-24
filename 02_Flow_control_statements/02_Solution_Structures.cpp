// In this, a decision is made on the basis of a condition. If the condition is satisfied, a statement block
// is run and if not, another one is run.
// Contents :- if-else, switch

#include<iostream>
using namespace std;

int main(){
    // ***************If-elseif-else****************
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if ((age>18) && (age>0)){
        cout<<"You are elligible for a driver's license"<<endl;
    }
    else if(age<5){
        cout<<"You can type???"<<endl;
    }
    else if(age<10){
        cout<<"How do u even have a phone?!"<<endl;
    }
    else if(age<16){
        cout<<"Go give your boards first"<<endl;
    }
    else if (age==18){
        cout<<"You can apply for a learner's license"<<endl;
    }
    
    else{
        cout<<"You are not elligible for appling driver's license"<<endl;
    }



    // ******************Switch*******************
    // Now the switch statement is a different type of Solution structure.
    // Here there are many (depends on programmer) cases, out of which any one is selected which satisfies
    // the condition.
    // THE USE OF BREAK in switch statement is very important and used almost everytime since once a condition
    // of a case is satisfied, it executes all the cases below it even if not satisfied. This alone is an interesting
    // behaviour, pretty much opposite of if-elseif-else.
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 4:
        cout<<"You are 4"<<endl;
        break;
    
    default:
        cout<<"No such case"<<endl;
        break;
    }


    return 0;
}
