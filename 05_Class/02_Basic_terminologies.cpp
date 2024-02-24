# include<iostream>
using namespace std;


// Basic Terminologies
/*
Encapsulation
In normal terms, Encapsulation is defined as wrapping up data and information under a single unit.
In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions
that manipulate them. Consider a real-life example of encapsulation, in a company, there are
different sections like the accounts section, finance section, sales section, etc. The finance section handles
all the financial transactions and keeps records of all the data related to finance. Similarly, the sales section
handles all the sales-related activities and keeps records of all the sales. Now there may arise a situation when
for some reason an official from the finance section needs all the data about sales in a particular month. In this case,
he is not allowed to directly access the data of the sales section. He will first have to contact
some other officer in the sales section and then request him to give the particular data.
This is what encapsulation is. Here the data of the sales section and the employees that can manipulate
them are wrapped under a single name “sales section”.
*/




/*
Abstraction
Abstraction is basically making some relevant data and methods available, hiding the implementation details.
For eg, ‘cout’  is an object of a class. When you use cout, you do not know how it will work, you just know
what will to do. Thus, hiding the ‘how’ part is abstraction.
For more details :- https://www.geeksforgeeks.org/abstraction-in-cpp/
*/


/*
Message Passing
Objects communicate with one another by sending and receiving information. A message for an object is a request
for the execution of a procedure and therefore will invoke a function in the receiving object that generates
the desired results. Message passing involves specifying the name of the object, the name of the function,
and the information to be sent.

*/

// Example
class Person {
private:
    string name;
    int age;

public:
    // Setter methods to update private data
    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age entered. Age must be non-negative." << endl;
        }
    }

    // Getter methods to retrieve private data
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Display information method
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // In this class, we can see that all the data related to a "Person"
    // is "encapsulated" in a class

};


int main(){
    // Create an object of the Person class
    Person person1;

    // Abstraction example
    // Clearly, we can see that we can create objects and implement its methods over and over
    // But, the implementation details are hidden.
     // If the 'age' and 'name' were public, it would have a lower level of abstracton and encapsulation


    // Message passing example
    person1.setName("John Doe");
    person1.setAge(25);

    // Message passing example
    cout << "Person Information:" << endl;
    person1.displayInfo();

    
    return 0;
}