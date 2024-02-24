# include<iostream>
using namespace std;

int main(){
    // Array is a collection of items of similar type stored in a contiguous memory locations.
    int marks[4] = {54,43,32,87}; // This is an array. '4' is optional but [] aren't.
    cout<<marks[0]<<endl; // This is how u access individual values.
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<" \n\n";

    // You can also create a array like,
    int prelimmarks[4]; // Somehow length of this array is must to specified if done by this method.
    prelimmarks[0] = 34;
    prelimmarks[1] = 45;
    prelimmarks[2] = 32;
    prelimmarks[3] = 78;
    cout<<prelimmarks[0]<<endl;
    // You can also change the value of an array.
    prelimmarks[1] = 64;
    cout<<prelimmarks[1]<<endl;
    cout<<prelimmarks[2]<<endl;
    cout<<prelimmarks[3]<<endl;
    cout<<"Break line \n\n";


    // Printing an array.
    for(int i = 0; i<4; i++){
        cout<<prelimmarks[i]<<endl;
    }

    // Task :- Get the same output usng while and do while loops.
    int j=0;
    while(j<4){
        cout<<prelimmarks[j]<<endl;
        j++;
    }
    cout<<"Break line \n\n";

    int k = 0;
    do {
        cout<<prelimmarks[k]<<endl;
        k++;
    }while(k<4);
    cout<<"Break line \n\n";


    // Using pointers with arrays.
    // Pointer arithmetic.
    // Consider
    int *p = marks; // Thus here p has taken the value '0'.
    cout<< "The value at marks[0] is "<<*p<<endl;
    cout<< "The value at marks[1] is "<<*(p+1)<<endl;
    cout<< "The value at marks[2] is "<<*(p+2)<<endl;
    cout<< "The value at marks[3] is "<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;


    // ARRAYS ALWAYS CONTAIN ONLY SAME TYPE OF MEMBERS, FOR EXAPMLE, INT ARRAY WILL ALWAYS HAVE INTEGERS AS ITS MEMBERS,
    // WHEREAS CHAR ARRAY WILL HAVE CHARACTERS.



    return 0;
}